/**
 * \mainpage Homework n. 3
 * \file main.c
 * \section intro_sec Documentation for 3rd homework.
 */

#ifndef __PROGTEST__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/**
 * Indicates success, no error occurs
 */
#define EASTER_OK 0

/**
 * Indicates that provided filename is not valid
 * @see validateFilename()
 */
#define EASTER_INVALID_FILENAME 1

/**
 * Indicates that input string contains somehow invalid or malformed years
 * @see parse()
 */
#define EASTER_INVALID_YEARS 2

/**
 * Indicates error in I\O manipulation
 * @see easterReport()
 */
#define EASTER_IO_ERROR 3

#endif /* __PROGTEST__ */


int easterReport(const char *, const char *);
int validateFilename(const char *);
int *parse(const char *, int *, int *);
void calculateEaster(const int, int *, int *);



/**
 * Validates filename of the output file
 * Filename can contain only alphanumeric symbols, dots, slashes and backslashes.
 * Moreover the filename must be provided with .html extension.
 * @param outFileName filename of the output file to be validated
 * @return EASTER_OK when filename is valid, EASTER_INVALID_FILENAME otherwise
 */
int validateFilename(const char *outFileName)
{
	char *ptr = strrchr((char *) outFileName, '.');

	if (strlen(outFileName) < 6 || strcmp(ptr, ".html") != 0) {
		return EASTER_INVALID_FILENAME;
	}

	for (unsigned int i = 0; i < strlen(outFileName); i++) {
		if (!isalnum(outFileName[i]) && outFileName[i] != '.' && outFileName[i] != '/' && outFileName[i] != '\\') {
			return EASTER_INVALID_FILENAME;
		}
	}

	return EASTER_OK;
}



/**
 * Parse input string into years
 * Input string contains years to be used to find dates of Easter.
 * Years can be written one by one separated by comma, e.g.: 2010,2011
 * 	or as a range, e.g.: 2010-2013. Any whitespaces between years or sepatators are trimmed.
 * @param input string to be parsed
 * @param status pointer where is stored status flag
 * @param cnt pointer where is stored total count of parsed years
 * @return array of parsed years
 */
int *parse(const char *input, int *status, int *cnt)
{
	const int RANGE_DISALLOWED = 0;
	const int RANGE_OPEN = 1;
	const int RANGE_ALLOWED = 2;
	
	*status = EASTER_OK;
	int count = 0; // count of years found in the string
	int len = 0; // length of currently parsed year
	int converted = 0; // numeric representation of currently parsed year
	int is_comma = 0; // flag if comma was found after a year
	int range = RANGE_ALLOWED; // flag whether currently parsed year is part of range input
	int in_number = 0; // flag whether a year is parsed now
	char *string = (char *) malloc(8 * sizeof(char)); // string representation of currenlty parsed year
	int *years = (int *) malloc(4 * 0 * sizeof(int)), *reallocated; // array of parsed years, temp variable for reallocation

	for (; *input != '\0'; input++) {
		
		if (*input == ',') {
			is_comma = 1;
			
			// comma at the beggining of the string or in the middle of the range
			if (count == 0 || range == RANGE_OPEN) { // ,2012 or 2010-,2012
				*status = EASTER_INVALID_YEARS;
				break;
			}
			
			// comma makes sure that previous range is complete
			range = RANGE_DISALLOWED;

			continue;
		}
		
		if (isspace(*input)) {
			
			// space between digits of currently parsed year, e.g.: 201 3
			if (in_number == 1) {
				*status = EASTER_INVALID_YEARS;
				break;
			}

			continue;
		}
		
			
		// following year will be used to fill a range
		if (*input == '-') {

			// - sign at the beginning of the string or 2012-2015-2020
			if (count == 0 || range == RANGE_DISALLOWED || range == RANGE_OPEN) {
				*status = EASTER_INVALID_YEARS;
				break;
			}
			
			range = RANGE_OPEN;
			continue;
		}


		// any non numeric character
		if (!isdigit(*input)) {
			*status = EASTER_INVALID_YEARS;
			break;
		}


		is_comma = 0;
		in_number = 1; // year parsing is in process
		string[len++] = *input; // add digit to string representation of year
		

		// whole year is parsed
		if (len == 4) {
			string[4] = '\0';

			// character after parsed year is another digit
			if (isdigit(input[1])) {
				*status = EASTER_INVALID_YEARS;
				break;
			}
			
			converted = atoi(string);


			// year is not in allowed range
			if (converted <= 1582 || converted >= 2200) {
				*status = EASTER_INVALID_YEARS;
				break;
			}
			
			
			// given and previous year are used to fill range
			if (range == RANGE_OPEN) {

				int diff = converted - years[count-1];
				
				// range is in reversed order
				if (diff < 0) {
					*status = EASTER_INVALID_YEARS;
					break;
				}
				
				
				reallocated = (int *) realloc(years, 4 * (count+diff) * sizeof(int));
				if (!reallocated) {
					*status = 4;
					break;
				}
				years = reallocated;
				
				
				// fill range
				for (int i = 0; i < diff; i++) {
					years[count+i] = years[count-1+i]+1;
				}
				
				count += diff;
				range = RANGE_DISALLOWED;

			} else {

				reallocated = (int *) realloc(years, 4 * (count+1) * sizeof(int));
				if (!reallocated) {
					*status = 4;
					break;
				}
				years = reallocated;
				
				
				// add another year
				years[count++] = converted;
				range = RANGE_ALLOWED;

			}

			converted = len = in_number = 0;
		}

	}
	
	
	// free pointer that held parsed year in string form
	free(string);
	
	
	// string ends with - sign, range is not complete
	if (range == RANGE_OPEN || is_comma) {
		*status = EASTER_INVALID_YEARS;
	}
	
	if (*status != EASTER_OK) {
		return NULL;
	}
	
	*cnt = count;
	return years;
}



/**
 * Calculate date of Easter in given year
 * Easter Hodges algorithm is used to determine date of Easter
 *  instead of the one provided in Progtest as it didnt work.
 * @param year
 * @param month pointer where resulting month is stored
 * @param day pointer where resulting day is stored
 * @return void
 */
void calculateEaster(const int year, int *month, int *day)
{
	*month = 3; // march by default
	
	// provided algorithm didnt work at all
	// used Easter Hodges algorithm instead
	int a = year / 100;
	int b = year % 100;
	int c = (3 * (a + 25)) / 4;
	int d = (3 * (a + 25)) % 4;
	int e = (8 * (a + 11)) / 25;
	int f = (5 * a + b) % 19;
	int g = (19 * f + c - e) % 30;
	int h = (f + 11 * g) / 319;
	int j = (60 * (5 - d) + b) / 4;
	int k = (60 * (5 - d) + b) % 4;
	int m = (2 * j - k - g + h) % 7;
	int n = (g - h + m + 114) / 31;
	int p = (g - h + m + 114) % 31;
	
	*month = n;
	*day = p + 1;
}



/**
 * Calculate date of Easter in given year
 * Easter Hodges algorithm is used to determine date of Easter
 *  instead of the one provided in Progtest as it didnt work.
 * @param years string containing years which are supposed to be 
 * 	parsed and to be derermined date of Easter for them
 * @param outFileName filename of the output file where result will be stored
 * @return status flag determining success or failure
 */
int easterReport(const char *years, const char *outFileName)
{
	int *_years, count, status;
    FILE *output;
    
    if (validateFilename(outFileName) != EASTER_OK) {
        return EASTER_INVALID_FILENAME;
	}
	
	_years = parse(years, &status, &count);
	if (status != EASTER_OK) {
		free(_years);
		return EASTER_INVALID_YEARS;
	}

	
    // generate html output
    if ((output = fopen(outFileName, "w")) == NULL) {
        free(_years);
        return EASTER_IO_ERROR;
    }

    
	// prolog
	fprintf(output, "%s",
		"<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0 Transitional//EN\">\n<html>\n"
		"<head>\n<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
		"<title>C++</title>\n</head>\n<body>\n"
		"<table width=\"300\">\n<tr><th width=\"99\">day</th><th width=\"99\">month</th><th width=\"99\">year</th></tr>\n"
	);


	// body
    for (int i = 0; i < count; i++) {
        int month;
		int day;	
		calculateEaster(_years[i], &month, &day);
        
		fprintf(output, "<tr><td>%d</td><td>%s</td><td>%d</td></tr>\n", day, month == 3 ? "March" : "April", _years[i]);
    }
    

	// epilog
    fprintf(output, "%s", 
		"</table>\n</body>\n</html>\n"
	);


    fclose(output);
    free(_years);

    return EASTER_OK;
}


#ifndef __PROGTEST__

int main (int argc, char *argv[])
{
	int status;
	
	status = easterReport ( "2012,2013,2015-2020", "out0.html" ); /* return: 0 */
	printf("status: %d\n", status);

	status = easterReport ( "2000 - 2014", "out1.html" ); /* return: 0 */
	printf("status: %d\n", status);
	
	status = easterReport ( "1890 - 1905  ,  2002        ,    2003-2003,2006,  2000", "out2.html" ); /* return: 0 */
	printf("status: %d\n", status);
	
	status = easterReport ( "2000,2011,2010-2020", "out3.html" ); /* return: 0 */
	printf("status: %d\n", status);
	
	status = easterReport ( "2000-3000", "out4.html" ); /* return: 2 */
	printf("status: %d\n", status);
	
	status = easterReport ( "2000", ".html" ); /* return: 1 */
	printf("status: %d\n", status);	
    
	status = easterReport ( "	2012,-2042", "a.html" ); /* return: 2 */
	printf("status: %d\n", status);	
	
	status = easterReport ( "2010,", "a.html" ); /* return: 2 */
	printf("status: %d\n", status);	
	
	status = easterReport ( "-2010", "a.html" ); /* return: 2 */
	printf("status: %d\n", status);	

	status = easterReport ( "2010-", "a.html" ); /* return: 2 */
	printf("status: %d\n", status);	
	
	status = easterReport ( "2000-,2010", "a.html" ); /* return: 2 */
	printf("status: %d\n", status);	
	
	status = easterReport ( "2000-2000,2001", "a.html" ); /* return: 0 */
	printf("status: %d\n", status);
	
	status = easterReport ( "200 0-2001,2002", "a.html" ); /* return: 2 */
	printf("status: %d\n", status);	
	
	status = easterReport ( "     1999  -2000   ,2001-2002", "a.html" ); /* return: 0 */
	printf("status: %d\n", status);

	return EASTER_OK;
}

#endif /* __PROGTEST__ */

/**
 * @author Pavel Jurásek
 * @createdAt 12.11.2013
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void error()
{
	printf("The string is not an identification number.\n");
	exit(0);
}


int isDate(int year, int month, int day)
{
    if (year < 54) {
        year +=1900;
	} else {
        year +=2000;
	}
  
    if (month > 50) {
		month -= 50;
	}
    
    if ((month > 12) || (month < 1) || (day < 1)) {
        return 0;
	}

    if (month == 2) {
		if (day == 29) {
			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
				return 1;
			}
			
			return 0;
		} else if (day > 28) {
			return 0;
		}
    }

	if (day == 31) {
		switch (month) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				return 1;
			break;
		}
	}
    
    return 1;
}



int main(int argc, char *argv[])
{
	char input[11]; // hold input value
	char birth[6], crc[4], rc[11]; // date part, complement part, id without slash
	
	printf("Enter an identification number:\n");

	if (scanf("%11s", input) != 1 || strlen(input) != 11) { // length must be 11
		error();
	}
	
	for (int i = 0; i <= 5; i++) { // 1-6 th char must be number
		if (!isnumber(input[i])) {
			error();
		}
	}
	
	if (input[6] != '/') { // 7th char must be slash
		error();
	}
	
	for (int i = 7; i <= 10; i++) { // 8-11 th char must be number
		if (!isnumber(input[i])) {
			error();
		}
	}
	
	strncpy(rc, input, 6); // copy first 6 chars (date part) to rc
	rc[6] = '\0'; // add terminator char
	strncpy(crc, input+7, 4); // copy last 4 chars (complement part) to crc
	
	strcat(rc, crc); // append crc (complement part) to rc
	rc[10] = '\0'; // add terminator char
	
	if (atol(rc) % 11 != 0) { // rc must be evenly divisible by 11
		error();
	}
	
	char pair[2]; // hold pairs of date
	int year, month, day;
	
	strncpy(pair, rc, 2); // copy 2 chars from 1st position from rc (year part)
	year = atoi(pair); // convert to number

	strncpy(pair, rc+2, 2); // copy 2 chars from 3rd position from rc (month part)
	month = atoi(pair); // convert to number
	
	strncpy(pair, rc+4, 2); // copy 2 chars from 5th position from rc (day part)
	day = atoi(pair); // convert to number
	
	if (!isDate(year, month, day)) { // validate date
		error();
	}
	
	printf("The string could be an identification number.\n");
	
	return 0;
}

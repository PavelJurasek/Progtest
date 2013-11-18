/**
 * @author Pavel Jurásek
 * @createdAt 12.11.2013
 */

#include <stdio.h>

int evenOdd ( const char * srcFileName, const char * dstFileName );
int writeWithReminder(FILE *input, FILE *output, int remainder);

#ifndef __PROGTEST__
int main(int argc, char *argv[])
{
	char *input = "/Users/jurasekpavel/Documents/University/PRG I/Progtest/Lesson08/FilesIntegers/input.txt";
	char *output = "/Users/jurasekpavel/Documents/University/PRG I/Progtest/Lesson08/FilesIntegers/output.txt";
	
	printf("%d\n", evenOdd(input, output));
}
#endif


int writeWithReminder(FILE *input, FILE *output, int remainder)
{
	int buff;
	
	rewind(input);
	while (!feof(input)) {
		if (fscanf(input, "%d", &buff) != 1) {
			if (feof(input)) {
				break;
			}
			
			return 0;
		}
		
		if (buff % 2 == remainder || buff % 2 == -remainder) { // even
			fprintf(output, "%d\n", buff);
		}
	}
	
	return 1;
}


int evenOdd ( const char * srcFileName, const char * dstFileName )
{
	FILE *input = fopen(srcFileName, "rt"), *output = fopen(dstFileName, "w+");
	
	if (input == NULL || output == NULL) {
		return 0; // i/o error
	}
	
	if (writeWithReminder(input, output, 0) == 0 || writeWithReminder(input, output, 1) == 0) {
		fclose(input);
		fclose(output);
		return 0; // invalid input
	}

	fclose(input);
	fclose(output);	
	return 1;
}

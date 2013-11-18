/*
 * @author Pavel Jurásek
 * @created 5.11.2013
 */

#include <stdio.h>
#include <stdlib.h>

void error();
void loadHex(char *ptr);
long hexToDec(char *hexadecimal);

int main(void)
{
    char *input = (char *) malloc(512);

    loadHex(input);
	
	printf("Decimal: %d\n", (int) hexToDec(input));
    
	return 0;
}


// load hexadecimal number from stdin
void loadHex(char *ptr)
{
	char c;
	
	printf("Enter a hexadecimal number:\n");
    
	if (scanf("%s", ptr) != 1) {
		free(ptr);
		error();
	}
	
	// catch whitespace in string
	while ((c = getchar()) != '\n') {
		if (c == ' ') {
			free(ptr);
			error();
		}
	}
}


// convert hexadecimal number to decimal number or exit program with error message
long hexToDec(char *hexadecimal)
{
	long decimal;
	char *end;
	
	decimal = strtol(hexadecimal, &end, 16);
	if (*end) {
		free(hexadecimal);
		error();
	}
	
	return decimal;
}


// print error message and exit program
void error()
{
	printf("Invalid input.\n");
	exit(1);
}

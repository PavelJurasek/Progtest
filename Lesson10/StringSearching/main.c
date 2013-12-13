#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRLEN 100

void substring_find(char [], char []);
void char_find(char [], char);
void error();


int main(int argc, char *argv[])
{
    char input[STRLEN], input_copy[STRLEN], search[STRLEN], c;
    
    printf("Enter a string, a substring, and a character:\n");
    
    if (scanf("%s", input) != 1 || getc(stdin) != ' ') {
        error();
    }
    
    if (scanf("%s", search) != 1 || getc(stdin) != ' ') {
        error();
    }

	c = getc(stdin);
    if (c == '\n' || c == '\0' || getc(stdin) != '\n') {
        error();
    }
    
	// duplicate input string, is needed twice
    strncpy(input_copy, input, STRLEN);
    
	substring_find(input, search);
	char_find(input_copy, c);
    
	return 0;
}


/**
 * Find positions of given substring
 */
void substring_find(char input[], char search[])
{
    char *substr = strcasestr(input, search);
    size_t len = strlen(input);

    if (substr == NULL) {
        printf("Substring '%s' not found.\n", search);
    } else {
	
        printf("String '%s' found, position(s): %ld", search, len - strlen(substr));
        substr++;

        while((substr = strcasestr(substr, search)) != NULL) {
			printf(", %ld", len - strlen(substr));
			substr++;
        }

        printf("\n");
    }
}


/**
 * Find number of occurences of given char
 */
void char_find(char input[], char c)
{
	unsigned int count = 0;
    
    while ((input = strchr(input, c)) != NULL) {
		count++;
		input++;
    }
    
    printf("Character '%c' found %d times.\n", c, count);
}


/**
 * Exit program.
 */
void error()
{
	printf("Invalid input.\n");
	exit(1);
}

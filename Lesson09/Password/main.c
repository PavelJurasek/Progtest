#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void error()
{
	printf("Invalid input.\n");
	exit(1);
}


void weak()
{
	printf("The password does not meet the requirements.\n");
	exit(0);
}


int main(int argc, char *argv[])
{
    char input[80];
	int alpha = 0, num = 0, special = 0;

	if (scanf("%s", input) != 1) {
        error();
    }

    if (strlen(input) < 5) {
        weak();
    }

    for (unsigned int i = 0; i < strlen(input); i++) {
	    if (isalpha(input[i])) {
            alpha++;
		} else if (isdigit(input[i])) {
			num++;
		} else {
			special++;
		}
    }

    if (alpha == 0 || num == 0 || special == 0) {
        weak();
    }

	printf("The password meets the requirements.\n");
    return 0;
}

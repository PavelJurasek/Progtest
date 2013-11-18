/*
 * @author Pavel Jurásek
 * @createdAt 6.11.2013
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void error();

int main(int argc, char *argv[])
{
	printf("Enter two binary numbers:\n");
	
	char *in1 = (char*) malloc(2048 * sizeof(char));
	int len1;
	
	char *in2 = (char*) malloc(2048 * sizeof(char));
	int len2;
	
	int* sum = (int*) malloc(2048+1 * sizeof(int));
	
	if (scanf("%[01]", in1) != 1) {
		error();
	}
	
	if (getc(stdin) != ' ') {
		error();
	}
	
	if (scanf("%[01]", in2) != 1) {
		error();
	}
	
	if (getc(stdin) != '\n') {
		error();
	}
	
	len1 = strlen(in1)-1;
	len2 = strlen(in2)-1;
	
	int carry = 0;
	long i = 0;
	char a, b;

	while (len1 >= 0 || len2 >= 0 || carry != 0) {
		a = (len1 >= 0) ? (in1[len1] - '0') : 0;
		b = (len2 >= 0) ? (in2[len2] - '0') : 0;
		
        sum[i++] = (a + b + carry) % 2;
        carry = (a + b + carry) / 2;

		len1--;
		len2--;
    }

    --i; // return to last used pos

	int found = 0; // leading zeros protection
    printf("Sum: ");
    while (i >= 0) {
		if (sum[i--] == 1 || found || i+1 == 0) { // leading zeros protection, keep 0 + 0 = 0
			found = 1;
			printf("%d", sum[i+1]);
		}
	}
	printf("\n");
	
	return 0;
}


// print error message and exit program
void error()
{
	printf("Invalid input.\n");
	exit(1);
}

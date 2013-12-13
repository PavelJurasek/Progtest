#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void error()
{
	printf("Invalid input.\n");
	exit(1);
}


char *loadString()
{
	char *ptr = (char *) malloc(80);

	if (scanf("%s", ptr) != 1) {
		error();
	}

	return ptr;
}


void catchChar(int code)
{
	if (getchar() == code) {
		return;
	}

	error();
}


int main(int argc, char* argv[])
{
	char *str1, *str2, *str3;

	printf("Enter the 3 words:\n");

	str1 = loadString();
	catchChar(' ');

	str2 = loadString();
	catchChar(' ');

	str3 = loadString();
	catchChar('\n');


	if (strcasecmp(str1, str2) == 0) {
	printf("Word1 and word2 are the same.\n");
	} else {
		printf("Word1 and word2 are not the same.\n");
	}

	if (strcasecmp(str1, str3) == 0) {
	printf("Word1 and word3 are the same.\n");
	} else {
		printf("Word1 and word3 are not the same.\n");
	}

	if (strcasecmp(str2, str3) == 0) {
	printf("Word2 and word3 are the same.\n");
	} else {
		printf("Word2 and word3 are not the same.\n");
	}

	printf("The number of characters in word1 is: %lu\n", strlen(str1));
	printf("The number of characters in word2 is: %lu\n", strlen(str2));
	printf("The number of characters in word3 is: %lu\n", strlen(str3));

	free(str1);
	free(str2);
	free(str3);

	return 0;
}

#include <stdio.h>

int fibonacci(int n)
{
    int last_prev = 0, last = 1, i;
    int result = 0;

    for (i = 1; i <= n; i++) {
        result = last_prev + last;
        last_prev = last;
        last = result;
	}

	return result;
}


int main(int argc, char *argv[])
{
    int i = 3;
    char c;

    printf("The Fibonacci sequence starts with 1,1,2\n");
	printf("Display next? [any key/n]\n");

    while((c = getchar()) != 'n') {

	    if (c != '\n') {
            getchar(); // catch \n
        }

        printf("Next number in Fibonacci sequence is: %d\n", fibonacci(i++));
		printf("Display next? [any key/n]\n");	
    }

    return 0;
}

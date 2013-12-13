#include <stdio.h>

int main(int argc, char *argv[])
{
	double sum = 0, n;

	printf("Enter the numbers:\n");

	while(scanf("%lf", &n) == 1) {
	    sum += n;

        if(n == 1000) {
	        printf("The sum is: %.6f\n", sum);
			return 0;
        }
    }

	printf("Invalid input.\n");
	return 1;
}

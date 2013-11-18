/*
 * @author Pavel Jurásek
 * @created 5.11.2013
 */

#include <stdio.h>

long int factorial(long int);
long int combination(long int, long int);

int main()
{
    long int n, k;

    printf("Enter n and k:\n");

	// n, k > 0 && n > k
    if (scanf("%ld %ld", &n, &k) != 2 || n < 0 || k < 0 || n < k) {
        printf("Invalid input.\n");
        return 1;
    }
    
	printf("C = %.ld\n", combination(n,k));
	return 0;
}


// calculates factorial of given number
long int factorial(long int number)
{
    if (number == 1 || number == 0) {
        return 1;
	}

	return number * factorial(number-1);
}


// calculates combination of n over k
long int combination(long int n, long int k)
{
	// n! / (k! * (n-k)!)
    return factorial(n) / (factorial(k) * factorial(n-k));
}


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

int main()
{
    int i = 3;
    char c = 0;
    
    printf("The Fibonacci sequence starts with 1,1,2\n");
    
    while(c != 'n') {

        printf("Display next? [any key/n]\n");

        if ((c = getchar()) != '\n') {
            getchar(); // catch newline character
        }
    
        if (c == 'n') {
            return 0;
        }
            
        printf("Next number in Fibonacci sequence is: %d\n", fibonacci(i++));

    }
    
    return 0;
}

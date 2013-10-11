
#include <stdio.h>

int main()
{
    double sum = 0, n;

    printf("Enter the numbers:\n");
    
    while(scanf("%lf", &n) == 1){
        if(n == 1000){
            sum = sum + n;
            printf("The sum is: %.6f\n", sum);
            return 0;
        }
        else sum = sum + n;
    }
    printf("Invalid input.\n");
    return 0;
}


#include <stdio.h>
#include <math.h>

int main()
{
    long int input, rem, power = 0;
    int output = 0;
    
    printf("Input a binary number:\n");

    scanf("%ld", &input);
    
    while(input > 0) {
        rem = input % 10;
        if (rem != 1 && rem != 0) {
            printf("Invalid input.\n");
            return 1;
        }
        
        input = input / 10;
        output += rem * pow(2, power++);
    }

    printf("Decimal number is: %d\n", output);

    return 0;
}

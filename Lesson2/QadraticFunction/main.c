//
//  main.c
//  Quadratic Function
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    double a, b, c, D, x1, x2;
    
    printf("Enter parameters a, b, and c of the quadratic equation:\n");

    if (
        scanf("%lf %lf %lf", &a, &b, &c) != 3   // make sure we have 3 numbers
        || a == 0   // make sure the equation will be quadratic
    ) {
        printf("Invalid input.\n");
        return 1;
    }
    
    if ((D = pow(b, 2) - (4 * a * c)) < 0) { // D = b^2 - 4ac
        printf("No solutions exist in real numbers.\n");
        return 1;
    }
    
    x1 = ((-1 * b) - sqrt(D)) / (2 * a); // x1 = (-b - sqrt(D)) / 2a
    x2 = ((-1 * b) + sqrt(D)) / (2 * a); // x2 = (-b + sqrt(D)) / 2a
    
    printf("Root #1, x1: %.6f\n", x1);
    printf("Root #2, x2: %.6f\n", x2);
    
    return 0;
}

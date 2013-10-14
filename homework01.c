
#include <stdio.h>
#include <math.h>


// prompts for side a and calculates area and perimeter of square
int square()
{
    double a;
    
    printf("Enter the side of the square:\n");

    if (scanf("%lf", &a) != 1 || a <= 0) {
        return 1;
    }
    
    printf("Square area is: %f\n", a * a);
    printf("Square perimeter is %f\n", 4 * a);

    return 0;
}


// prompts for side a and b and calculates area and perimeter of rectangle
int rectangle()
{
    double a, b;
    
    printf("Enter the sides of the rectangle:\n");
    
    if (scanf("%lf %lf", &a, &b) != 2 || a <= 0 || b <= 0) {
        return 1;
    }
    
    printf("Rectangle area is: %f\n", a * b);
    printf("Rectangle perimeter is: %f\n", 2 * a + 2 * b);
    
    return 0;
}


// prompts for radius r and calculates area and circumvence of circle
int circle()
{
    double r;
    
    printf("Enter the radius of the circle:\n");
    
    if (scanf("%lf", &r) != 1 || r <= 0) {
        return 1;
    }
    
    printf("Circle area is: %f\n", M_PI * pow(r, 2));
    printf("Circumference is: %f\n", 2 * M_PI * r);
    
    return 0;
}



int main()
{
    int result; // holds return value of the functions above
    char option = '\0';
    
    printf("Enter a 2D shape to compute area and perimeter: a - square, b - rectangle, c -circle\n");
    scanf("%c", &option); // read single char
    
    switch(option) {
        case 'a':
                result = square();
            break;
        case 'b':
                result = rectangle();
            break;
        case 'c':
                result = circle();
            break;
        default:
                result = 1; // error
            break;
    }
    
    if (result == 1) {
        printf("Invalid input.\n");
        return 1;
    }

    return 0;
}

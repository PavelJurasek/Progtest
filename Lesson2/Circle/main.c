//
//  main.c
//  Circle
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    double ax, ay, bx, by;
    double sx, sy, radius;
    
    printf("Enter coordinates of points A and B:\n");
    
    // make sure the provided values are numbers
    if (scanf("%lf %lf %lf %lf", &ax, &ay, &bx, &by) != 4) {
        printf("Invalid input.\n");
        return 1;
    }

    // calculate center point of the circle
	sx = (ax+bx) / 2;
	sy = (ay+by) / 2;
    
	printf("Center point is: S[%.6f,%.6f]\n", sx, sy);

    // calcuate radius
	radius = sqrt(pow(bx-ax, 2) + pow(by-ay, 2)) / 2;

	printf("Circle radius r is: %.6f\n", radius);
    
    return 0;
}

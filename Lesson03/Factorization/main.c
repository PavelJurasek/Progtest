
#include <stdio.h>

int main(int argc, const char * argv[])
{
    double v, w, h, error;
    
    printf("Enter values v, w, and h:\n");
    
    if (
        (scanf("%lf %lf %lf", &v, &w, &h) != 3)
        || (v < 0)
        || (w <= 0)
        || (h <= 0)
    ) {
        printf("Invalid input.\n");
        return 1;
    }
    
    // factorization
    h = h * ((w * v) / (w * w * h));
    
    w = w * ((v * h) / (w * h * h));
    
    // error
    error = v - (h * w);
    
    //output
    printf("Number %.3f can be factorized to %.3f x %.3f. The error is %.3f.\n", v, w, h, error);
    
    return 0;
}

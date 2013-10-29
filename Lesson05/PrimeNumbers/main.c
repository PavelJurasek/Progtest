//
//  main.c
//  PrimeNumbers
//
//  Created by Pavel Jurásek on 22.10.13.
//  Copyright (c) 2013 Pavel Jurásek. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    int limit = sqrt(n) + 1;
    
    for (int i = 2; i < limit; i++) {
        if (n % i == 0) return 0;
    }
    
    return 1;
}

int main()
{
    int min, max;
    
    printf("Define interval:\n");
    
    if (scanf("%d %d", &min, &max) != 2 || min > max) {
        printf("Invalid input.\n");
        return 1;
    }
    
    if (min <= 1) {
        min = 2;
    }
    
    for (int i = min; i <= max; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}

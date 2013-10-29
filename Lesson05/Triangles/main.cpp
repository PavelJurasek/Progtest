//
//  main.cpp
//  Triangles
//
//  Created by Pavel Jurásek on 22.10.13.
//  Copyright (c) 2013 Pavel Jurásek. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c, p, area;
        
    cout << "Define triangle:\n";
    cin >> a >> b >> c;
        
    if (cin.fail() || a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid input.\n";
        return 1;
    }
        
    if ((a+b) <= c || (a+c) <= b || (b+c) <= a) {
        cout << "The triangle does not exist.\n";
        return 0;
    }
        
    p = (a + b + c) / 2.0;
        
    area = sqrt(p * (p - a) * (p - b) * (p - c));
        
    cout << "The triangle exists, area is: " << area << endl;
    
    return 0;
}


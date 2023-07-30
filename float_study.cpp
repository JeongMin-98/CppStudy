//
// Created by jeong on 2023-07-24.
//

#include<math.h>
#include<iostream>
using namespace std;

bool absoluteEqual(double a, double b){
    return fabs(a-b) < 1e-10;
}

int main()
{
    float a = 1.12345;
    float b = 2.34566;

    cout << absoluteEqual(a, b);

    return 0;
}
// Demonstration of preprocessor
/*
    preplacement Activity
    22 April 2026
*/

#include<stdio.h>
#define PI 3.14

int main()
{
    //Area of circle
    float Area = 0.0f;
    
    Area = 10.5f * 10.5f * PI;

    printf("Area of Circle : %f\n", Area);

    return 0;
}
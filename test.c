// Demonstration of Preprocessor

/*
    Preplacement Activity
    22 April 2026
*/

#include<stdio.h>
#define PI 3.14

int main()
{
    // Area of circle
    
    float area = 0.0f;

    area = 10.5f * 10.5f * PI;

    printf("Area of Circle is : %f\n",area);
    
    return 0;
}
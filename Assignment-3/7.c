// 7. Write a program to check whether roots of a given quadratic equation are real & distinct, real &equal or imaginary roots
#include <stdio.h>
 int main()
{
    // ax^2 + bx + c
    double a, b, c, discriminant;
    printf("Enter coefficients a, b and c:\n");
    scanf("%lf %lf % lf", &a, &b, &c);
    printf("Quadratic equation is : %lfx^2 + %lfx + %lf \n",a,b,c);
    discriminant = b * b - 4* a* c;
    if(discriminant > 0)
        printf("Roots are real and distinct");
    else if(discriminant == 0)
        printf("Roots are real an equal.");
    else
        printf("Roots are imaginary");
    return 0;
}

// discriminant = b^2 - 4ac 
/*
  disciminant > 0 --> real and distinct
  disciminant < 0 --> imaginary
  disciminant = 0 --> real and equal
*/
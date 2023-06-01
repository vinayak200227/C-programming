// 10. C program to find all roots of a quadratic equation using switch case

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients (a, b, and c) of the quadratic equation: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    switch (discriminant > 0)
    {
    case 1: // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1: %.2lf\n", root1);
        printf("Root 2: %.2lf\n", root2);
        break;

    case 0: // Two complex roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex.\n");
        printf("Root 1: %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2: %.2lf - %.2lfi\n", realPart, imaginaryPart);
        break;
    }

    return 0;
}

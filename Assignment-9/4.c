// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an isosceles
// triangle or not
// b. Check whether a given set of three numbers are lengths of sides of a right
// angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle or not
// d. Exit

#include <stdio.h>

int isIsoscelesTriangle(int a, int b, int c)
{
    return (a == b || b == c || a == c);
}

int isRightAngledTriangle(int a, int b, int c)
{
    if (a > b && a > c)
        return (a * a == b * b + c * c);
    else if (b > a && b > c)
        return (b * b == a * a + c * c);
    else
        return (c * c == a * a + b * b);
}

int isEquilateralTriangle(int a, int b, int c)
{
    return (a == b && b == c);
}

int main()
{
    int choice, a, b, c;

    do
    {
        printf("Menu:\n");
        printf("1. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
        printf("2. Check whether a given set of three numbers are lengths of sides of a right-angled triangle or not\n");
        printf("3. Check whether a given set of three numbers are lengths of an equilateral triangle or not\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter three numbers: ");
            scanf("%d %d %d", &a, &b, &c);
            if (isIsoscelesTriangle(a, b, c))
                printf("The given set of numbers can form an isosceles triangle.\n");
            else
                printf("The given set of numbers cannot form an isosceles triangle.\n");
            break;

        case 2:
            printf("Enter three numbers: ");
            scanf("%d %d %d", &a, &b, &c);
            if (isRightAngledTriangle(a, b, c))
                printf("The given set of numbers can form a right-angled triangle.\n");
            else
                printf("The given set of numbers cannot form a right-angled triangle.\n");
            break;

        case 3:
            printf("Enter three numbers: ");
            scanf("%d %d %d", &a, &b, &c);
            if (isEquilateralTriangle(a, b, c))
                printf("The given set of numbers can form an equilateral triangle.\n");
            else
                printf("The given set of numbers cannot form an equilateral triangle.\n");
            break;

        case 4:
            printf("Exiting the program.\n");
            break;

        default:
            printf("Invalid choice. Please enter a valid option.\n");
            break;
        }

        printf("\n");
    } while (choice != 4);

    return 0;
}

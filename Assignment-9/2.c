// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    char choice;

    while(1){
        printf("A. Addition\n");
        printf("B. Subtraction\n");
        printf("C. Multiplication\n");
        printf("D. Division\n");
        printf("E. Exit\n");

        fflush(stdin);
        scanf("%c", &choice);
        fflush(stdin);

        switch (choice)
        {
        case 'A':
            printf("Enter a number:\n");
            scanf("%d %d", &a, &b);
            printf("Addition is %d.\n", a + b);
            break;
        case 'B':
            printf("Enter a number:\n");
            scanf("%d %d", &a, &b);
            printf("Subtraction is %d.\n", a - b);
            break;
        case 'C':
            printf("Enter a number:\n");
            scanf("%d %d", &a, &b);
            printf("Multiplication is %d.\n", a * b);
            break;
        case 'D':
            printf("Enter a number:\n");
            scanf("%d %d", &a, &b);
            printf("Division is %d.\n", a / b);
            break;
        case 'E':
            return 0;
            break;
        }
    }
    
    return 0;
}
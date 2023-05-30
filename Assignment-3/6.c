// 6. Write a program to print greater between two numbers.Print one number if both are the same.
#include <stdio.h>
    int
    main()
{
    int n1, n2;
    printf("Enter number1:\n");
    scanf("%d", &n1);
    printf("Enter number 2:\n");
    scanf("%d",&n2);
    if(n1 > n2)
        printf("Number 1 is greater.");
    else if(n1 == n2)
        printf("Both numbers are equal.");
    else
        printf("Number 2 is greater.");
    return 0;
}
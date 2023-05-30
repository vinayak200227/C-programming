// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter Number:\n");
    scanf("%d", &number);
    if ((number % 7 == 0) || (number % 3 == 0))
        printf("Number is divisible by 7 OR 3.\n");
    else
        printf("Number is neither divisible by 7 nor divisible by 3.\n");
    return 0;
}
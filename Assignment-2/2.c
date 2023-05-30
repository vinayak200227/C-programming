// 2. Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter Number:\n");
    scanf("%d", &x);
    printf("Number without its last digit is %d", x/10);
    return 0;
}
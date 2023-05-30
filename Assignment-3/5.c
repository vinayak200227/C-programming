// 5. Write a program to check whether a given number is a three digit number or not.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    if((n >99) && (n<1000))
        printf("Number is a three digit number.");
    else
        printf("Number is not a three digit number.");
    return 0;
}

// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.

#include<stdio.h>

int main()
{
    int arr[10];
    printf("Enter 10 array values :\n");
    for(int i = 0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }

    float sum = 0;

    for(int i = 0; i<10; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum of 10 values of array is %.2f.",sum);
    return 0;
}
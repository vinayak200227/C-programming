// 8. Write a program to compute the sum of all elements in an array using pointers.

#include<stdio.h>

int sum(int *p, int n)
{
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        sum = sum + *(p + i);
    }
    return sum;
}

int main()
{
    int a[10] = {23, 34, 56, 3, 55, 76, 32, 23, 54, 54};
    int s = sum(a, 10);

    printf("Sum of all elements in an array is %d.",s);
    return 0;
}
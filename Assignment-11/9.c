// 9. Write a program in C to find the square of any number using the function.

#include<stdio.h>

int square(int N)
{
    return N * N;
}

int main()
{
    int N, sq;
    printf("Enter value of n : ");
    scanf("%d",&N);

    sq = square(N);

    printf("Square of %d is %d.",N,sq);
    return 0;
}
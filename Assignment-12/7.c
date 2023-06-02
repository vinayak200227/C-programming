// 7. Write a recursive function to print squares of first N natural numbers

#include<stdio.h>

void printSquare(int N)
{
    if(N <= 0)
    {
        return;
    }
    printSquare(N - 1);
    printf("%d ", N * N);
}

int main()
{
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Squares of first %d namtural numbers are : ", N);
    printSquare(N);

    return 0;
}
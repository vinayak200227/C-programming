// 4. Write a recursive function to print first N odd natural numbers in reverse order

#include <stdio.h>

void printOddNumbers(int N)
{
    if (N <= 0)
    {
        return;
    }

    printf("%d ", (N * 2) - 1);
    printOddNumbers(N - 1);
}

int main()
{
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("First %d Odd numbers: ", N);
    printOddNumbers(N);

    return 0;
}
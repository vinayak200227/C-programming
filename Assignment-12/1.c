// 1. Write a recursive function to print first N natural numbers

#include <stdio.h>

void printNaturalNumbers(int N)
{
    if (N == 0)
    {
        return;
    }

    printNaturalNumbers(N - 1);
    printf("%d ", N);
}

int main()
{
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("First %d natural numbers: ", N);
    printNaturalNumbers(N);

    return 0;
}

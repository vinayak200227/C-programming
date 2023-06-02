// 5. Write a recursive function to print first N even natural numbers

#include <stdio.h>

void printEvenNumbers(int N)
{
    if (N <= 0)
    {
        return;
    }

    printEvenNumbers(N - 1);
    printf("%d ", (N * 2));
}

int main()
{
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("First %d Even numbers: ", N);
    printEvenNumbers(N);

    return 0;
}

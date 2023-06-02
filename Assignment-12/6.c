// 6. Write a recursive function to print first N even natural numbers in reverse order

#include <stdio.h>

void printEvenNumbers(int N)
{
    if (N <= 0)
    {
        return;
    }

    printf("%d ", (N * 2));
    printEvenNumbers(N - 1);
}

int main()
{
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("First %d Even numbers in reverse order are : ", N);
    printEvenNumbers(N);

    return 0;
}
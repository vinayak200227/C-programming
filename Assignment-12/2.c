// 2. Write a recursive function to print first N natural numbers in reverse order

#include <stdio.h>

void printNaturalNumbers(int N)
{
    if (N == 0)
    {
        return;
    }

    printf("%d ", N);
    printNaturalNumbers(N - 1);
    
}

int main()
{
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("First %d natural numbers in reverse order are: ", N);
    printNaturalNumbers(N);

    return 0;
}

// 6. Write a function to print all Prime numbers between two given numbers.(TSRN)

#include <stdio.h>

int isPrime(int number)
{
    if (number <= 1)
    {
        return 0; // Not prime
    }

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

void printPrime(int a,int b)
{
    int number = a;

    while (number <= b)
    {
        if (isPrime(number))
        {
            printf("%d ", number);
        }
        number++;
    }
}

int main()
{
    int a,b;

    printf("Enter the values of start and end : ");
    scanf("%d %d", &a, &b);

    printPrime(a,b);

    return 0;
}
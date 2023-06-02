// 5. Write a function to print first N prime numbers(TSRN)

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

void printPrime(int N)
{
    int count = 0;
    int number = 2;

    while(count < N)
    {
        if(isPrime(number))
        {
            count++;
            printf("%d ",number);
        }
        number++;
    }
}

int main()
{
    int N;

    printf("Enter the value of N : ");
    scanf("%d", &N);
 
    printPrime(N);
    
    return 0;
}
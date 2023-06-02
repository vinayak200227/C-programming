// 4. Write a function to find the next prime number of a given number. (TSRS)

#include <stdio.h>

int isPrime(int number)
{
    if (number <= 1)
    {
        return 0; // Not prime
    }

    for (int i = 2; i <= number/2; i++)
    {
        if (number % i == 0)
        {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

int getNextPrime(int number)
{
    number++; // Start with the next number

    while (!isPrime(number))
    {
        number++; // Increment and check if the number is prime
    }

    return number;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int nextPrime = getNextPrime(num);

    printf("The next prime number after %d is %d\n", num, nextPrime);

    return 0;
}

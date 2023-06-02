// 3. Write a function to check whether a given number is even or odd. Return 1 if the
//number is even, otherwise return 0.(TSRS)
#include<stdio.h>
int evenOrOdd(int n)
{
    return (n%2 == 0);
}

int main()
{
    if(evenOrOdd(8) == 1)
    {
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}
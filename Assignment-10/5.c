// 5. Write a function to print first N odd natural numbers. (TSRN)
#include <stdio.h>
void printNatural(int n)
{
    int i;
    for (i = 1; i <= n; i= i+2)
    {
        printf("%d\n", i);
    }
}

int main()
{
    printNatural(10);
}
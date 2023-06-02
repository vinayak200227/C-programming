// 4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void printNatural(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
}

int main()
{
    printNatural(10);
}
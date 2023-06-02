// 1. Write a recursive function to calculate sum of first N natural numbers

#include<stdio.h>
int sum(int n)
{
    if(n == 1)
        return 1;
    
    return n + sum(n-1);
}
int main(){
    int n,x;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    x = sum(n);
    printf("Sum of first %d natural numbers is %d",n,x);
    return 0;
}
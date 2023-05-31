// 6. Write a program to calculate factorial of a number.
#include<stdio.h>

int main(){
    int n, fact,i;
    printf("Enter a number:\n");
    scanf("%d",&n);
    fact = 1;
    for(i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("Factorial of %d is %d.",n,fact);
    return 0;
}
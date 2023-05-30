// 1. Write a program to print unit digit of a given number
#include<stdio.h>
int main(){
    int x;
    printf("Enter Number:\n");
    scanf("%d",&x);
    printf("Unit digit of %d is %d", x, x % 10);
    return 0;
}
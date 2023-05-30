// 7. Write a program to check whether the given number is even or odd using a bitwise operator.
// Even number has least significant bit as 0 and for odd 1.
#include<stdio.h>
int main(){
    int x;
    printf("Enter Number:");
    scanf("%d", &x);
    (x & 1) ? printf("Odd") : printf("Even");
    return 0;
}
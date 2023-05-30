// 11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
// and convert it into USD.

#include<stdio.h>
int main(){
    float INR , USD;
    printf("Enter the amount in INR:\n");
    scanf("%f", &INR);
    USD = INR / 76.23 ;
    printf("Amount in USD will be $%.2f", USD);
    return 0;
}
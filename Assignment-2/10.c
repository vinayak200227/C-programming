// 10. Write a program to input a number from the user and also input a digit. Append a
// digit in the number and print the resulting number.(Example - number = 234 and digit = 9 then the resulting number is 2349)

#include<stdio.h>
int main(){
    int n, digit,result;
    printf("Enter a number and digt:\n");
    scanf("%d , %d", &n, &digit);
    result = n * 10 + digit;
    printf("Result = %d", result);
    return 0;
}
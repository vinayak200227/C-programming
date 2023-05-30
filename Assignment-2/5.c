// 5. Write a program to input a three digit number and display the sum of the digits.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter three digit number :\n");
    scanf("%d", &x);
    printf("Sum of digits is %d \n", x/100 + (x/10)%10 + x %10); 

//    // Another method
//     int sum = 0;
//     sum = x%10; 
//     x = x/10;
//     sum = (x % 10) + sum;
//     x = x/10;
//     sum = x + sum ;
//     printf("Sum = %d", sum);
    return 0;
}
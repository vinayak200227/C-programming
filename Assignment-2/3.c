// 3. Write a program to swap values of two int variables
#include <stdio.h>
int main()
{
    int x= 5, y = 10, temp;
    temp = x;
    x = y;
    y = temp;
    printf("Value of x is %d and y is %d .", x, y);
    return 0;
}
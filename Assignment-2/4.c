// 4. Write a program to swap values of two int variables without using a third variable.
#include <stdio.h>
int main()
{
    int x = 5, y = 10;
    x = x + y;
    y = x - y;
    x = x - y;
    printf("Value of x is %d and y is %d .", x, y);
    return 0;
}
// 11. Write a program to find the position of first 1 in LSB.
#include<stdio.h>
int main()
{
    int x, count = 0;
    printf("Enter a number :\n");
    scanf("%d",&x);
    int a =x;
    while( a != 0 )
    {
        count++;
        if( a & 1 == 1)
            break;
        a = a >> 1;     // right shift
    }
    printf("Position of first 1 in LSB of %d is %d.",x,count);
    return 0;
}
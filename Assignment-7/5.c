// 5. Write a program to check whether two given numbers are co-prime numbers or not
#include <stdio.h>
int main()
{
    int x, y, i,HCF;
    printf("Enter two numbers:\n");
    scanf("%d%d", &x, &y);
    for (i = 1; i <= x * y; i++)
    {
        if ((i % x == 0) && (i % y == 0))
            break;
    }
    HCF = x*y / i;
    if(HCF == 1)
        printf("%d and %d are co-prime numbers.",x,y);
    else
        printf("%d and %d are not co-prime numbers.",x,y);
    return 0;
}
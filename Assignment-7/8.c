// 8. Write a program to find next Prime number of a given number
#include <stdio.h>
int main()
{
    int i, n, flag,a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    for (n = a+1; n <= 100; n++)
    {
        flag = 0;
        for (i = 2; i < n / 2; i++)
        {
            if (n % i == 0)
            {
                flag++;
                break;
            }
        }
        if (flag == 0 && n != 1){
            printf("%d\n", n);
            break;
        }
    }
    return 0;
}
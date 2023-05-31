// 7. Write a program to print all Prime numbers between two given numbers
#include <stdio.h>
int main()
{
    int i, n, flag,a,b;
    printf("Enter numbers between which want prime number:\n");
    scanf("%d %d",&a,&b);
    for (n = a; n <= b; n++)
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
        if (flag == 0 && n != 1)
            printf("%d\n", n);
    }
    return 0;
}
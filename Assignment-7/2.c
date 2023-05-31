// 2. Write a program to print first N terms of Fibonacci series
#include <stdio.h>
int main()
{
    int num, a = 0, b = 1, c = 0; // a & b are first two values of fibonacci series.
    printf("Enter a value of num:\n");
    scanf("%d", &num);
    printf("First %d fibonacci numberes are...\n",num);
    printf("%d\n", a);
    printf("%d\n",b);
    // for (int i = 2; i < num; i++) // already two values in series so initialized by 2.
    // {
    //     c = a + b;
    //     printf("%d\n",c);
    //     a = b;
    //     b = c;
        
    // }

    // By while loop
    int count = 2;
    while(count < num)
    {
        c = a + b;
        count++;
        printf("%d\n",c);
        a = b;
        b = c;
    }
    return 0;
}
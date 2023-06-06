// 3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum = 0;
    int *p;

    printf("Enter number of values you want to enter\n");
    scanf("%d", &n);

    p = (int *)malloc(n*sizeof(int));

    printf("Enter %d values\n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + p[i];
    }

    printf("Sum is %d.\n", sum);

    free(p);

    return 0;
}
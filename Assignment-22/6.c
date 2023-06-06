// 6. Write a program in C to find the largest element using Dynamic Memory Allocation.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i,max = -1;
    int *p;

    printf("Enter number of values you want to enter\n");
    scanf("%d", &n);

    p = (int *)calloc(n, sizeof(int));

    printf("Enter %d values\n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    for (i = 0;i<n;i++)
    {
        if (p[i] > max)
        {
            max = p[i];
        }
    }

    printf("Largest element in array is %d.\n",max);


    free(p);

    return 0;
}
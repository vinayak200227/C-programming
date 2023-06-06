// 10. Find out the maximum and minimum from an array using dynamic memory allocation in C.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, max = -1, min = 9999;
    int *p;

    printf("Enter number of values you want to enter\n");
    scanf("%d", &n);

    p = (int *)calloc(n, sizeof(int));

    printf("Enter n values\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    for (i = 0; i < n; i++)
    {
        if (p[i] > max)
        {
            max = p[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (p[i] < min)
        {
            min = p[i];
        }
    }

    printf("Maximum element in array is %d.\n", max);
    printf("Minimum element in array is %d.\n", min);

    free(p);

    return 0;
}
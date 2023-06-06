// 5. Write a program to read a one dimensional array, print sum of all elements along with
// inputted array elements using dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum = 0;
    int *p;

    printf("Enter number of values you want to enter\n");
    scanf("%d", &n);

    p = (int *)calloc(n, sizeof(int));

    printf("Enter %d values\n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    printf("Inputed array elements are\n");
    for(i = 0; i<n;i++)
    {
        printf("%d \n",p[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + p[i];
    }

    printf("Sum = %d",sum);

    free(p);

    return 0;
}
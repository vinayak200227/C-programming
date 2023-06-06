// 7. Write a program to demonstrate memory leak in C.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum = 0;
    int *p;

    printf("Enter number of values you want to enter\n");
    scanf("%d", &n);

    p = (int *)malloc(n);   //memory leak if we not free it before assigning to other
    free(p);  // free previous memory .
    p = (int *)malloc(10);

    free(p);

    if (p == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }
    free(p);
    return 0;
}
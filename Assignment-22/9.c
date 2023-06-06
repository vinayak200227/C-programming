// 9. Write a program to allocate memory dynamically of the size in bytes entered by the
// user. Also handle the case when memory allocation is failed.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *p;

    printf("Enter number of values you want to enter\n");
    scanf("%d", &n);

    p = (int *)malloc(n);

    if(p == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }
    free(p);
    return 0;
}
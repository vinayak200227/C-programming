// 4. Write a program to input and print text using dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    char *p;

    printf("Enter number of values you want to enter\n");
    scanf("%d", &n);

    p = (char *)calloc(n, sizeof(int));

    printf("Enter %d texts\n",n);
    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        scanf("%s", p + i);
    }
    for (i = 0; i < n; i++)
    {
        printf("%c ",p[i]);
    }

    free(p);

    return 0;
}
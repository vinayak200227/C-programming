// 8. Write a function in C to print all unique elements in an array.

#include <stdio.h>
int main()
{
    int a[11] = {2, 3, 4, 2, 5, 6, 1, 3, 4, 5, 3};
    int hash[10] = {0};
    int i;
    for (i = 0; i < 12; i++)
    {
        hash[a[i]]++;
    }
    printf("Unique elements in array are: \n");
    for (i = 0; i < 10; i++)
    {
        if (hash[i] == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
// 10. Write a function in C to count the frequency of each element of an array.

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
    printf("Frequency of each element of an  array : \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d --> %d\n",i,hash[i]);
    }
    return 0;
}
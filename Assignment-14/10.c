// 10. Write a program in C to copy the elements of one array into another array.Take array values from the user.

#include <stdio.h>

int main()
{
    int arr1[10];
    int arr2[10];
    printf("Enter 10 array values :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for(int i = 0; i<10; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("Elements in copied array :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
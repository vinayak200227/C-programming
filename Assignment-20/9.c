// 9. Write a program to print the elements of an array in reverse order.

#include <stdio.h>

void printArrayReverse(int *arr, int size)
{
    int *ptr = arr + size - 1;

    printf("Array in reverse order : ");
    while (ptr >= arr)
    {
        printf("%d ", *ptr);
        ptr--;
    }
    printf("\n");
}

int main()
{
    int arr[100], size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printArrayReverse(arr, size);

    return 0;
}

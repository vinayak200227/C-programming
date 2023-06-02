// 5. Write a function to find the first occurrence of adjacent duplicate values in the array.Function has to return the value of the element.

#include <stdio.h>

int findFirstAdjacentDuplicate(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            return arr[i];
        }
    }

    // If no adjacent duplicates found, return -1 
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 4, 5, 6, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int duplicate = findFirstAdjacentDuplicate(arr, size);

    if (duplicate != -1)
    {
        printf("First adjacent duplicate: %d\n", duplicate);
    }
    else
    {
        printf("No adjacent duplicates found.\n");
    }

    return 0;
}

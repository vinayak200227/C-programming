// 4. Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

#include <stdio.h>

void rotateArray(int arr[], int size, int n, char direction)
{
    int i, j;

    // Left rotation
    if (direction == 'l' || direction == 'L')
    {
        for (i = 0; i < n; i++)
        {
            int temp = arr[0];
            for (j = 0; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            arr[j] = temp;
        }
    }
    // Right rotation
    else if (direction == 'r' || direction == 'R')
    {
        for (i = 0; i < n; i++)
        {
            int temp = arr[size - 1];
            for (j = size - 1; j > 0; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[j] = temp;
        }
    }
}

int main()
{
    int arr[] = {32, 29, 40, 12, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n;
    char direction;

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &n);
    getchar(); // Clearing the newline character from the input buffer

    printf("Enter the direction (l for left, r for right): ");
    scanf("%c", &direction);

    printf("Original Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    rotateArray(arr, size, n, direction);

    printf("\nRotated Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

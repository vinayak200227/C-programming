// 8. Write a program to find the second smallest number in an array.Take array values from the user.

#include <stdio.h>

int main()
{
    int arr[10];
    printf("Enter 10 array values :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min1 = 10000;
    int min2 = 10000;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2)
        {
            min2 = arr[i];
        }
    }

    printf("Second Smallest element of an array is %d.", min2);

    return 0;
}
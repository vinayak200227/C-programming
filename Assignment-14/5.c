// 5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.

#include <stdio.h>

int main()
{
    int arr[10];
    printf("Enter 10 array values :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = 10000;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Minimum element from array is %d.", min);

    return 0;
}
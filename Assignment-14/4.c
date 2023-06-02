// 4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.

#include <stdio.h>

int main()
{
    int arr[10];
    printf("Enter 10 array values :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = 0;

    for (int i = 0; i < 10; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Maximum element from array is %d.",max);

    return 0;
}
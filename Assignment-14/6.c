// 6. Write a program to sort elements of an array of size 10. Take array values from the user.

#include <stdio.h>

int main()
{
    int arr[10], temp;
    printf("Enter 10 array values :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;

            }
        }
    }

    printf("Sorted array is : \n");
    for(int i = 0; i< 10; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
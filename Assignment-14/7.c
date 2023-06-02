// 7. Write a program to find second largest in an array.Take array values from the user.

#include <stdio.h>

int main()
{
    int arr[10];
    printf("Enter 10 array values :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max1 = -999;
    int max2 = -999;
    for(int i = 0; i<10; i++)
    {
        if(arr[i]>max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2)
        {
            max2 = arr[i];
        }
    }

    printf("Second Largest element of an array is %d.",max2);

    return 0;
}
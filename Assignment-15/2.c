// 2. Write a function to find the smallest number from the given array of any size.(TSRS)

#include <stdio.h>

int minElement(int arr[], int n)
{
    int min = 9999;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int n;
    printf("Enter size of an array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements : \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = minElement(arr, n);

    printf("Minimum element of an array is %d.", min);

    return 0;
}
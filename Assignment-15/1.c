// 1. Write a function to find the greatest number from the given array of any size.(TSRS)

#include<stdio.h>

int maxElement(int arr[],int n)
{
    int max = 0;
    for(int i = 0; i< n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    printf("Enter size of an array : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements : \n",n);
    for(int i = 0; i< n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = maxElement(arr, n);

    printf("Maximum element of an array is %d.",max);

    return 0;
}
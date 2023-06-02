// 6. Write a function in C to read n number of values in an array and display it in reverse order.

#include <stdio.h>

int reverse(int arr[], int n)
{
    for(int i = n -1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
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

    reverse(arr, n);

    return 0;
}
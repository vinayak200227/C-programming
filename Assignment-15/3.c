// 3. Write a function to sort an array of any size.(TSRN)

#include <stdio.h>

void sort(int arr[], int n)
{
    int temp;
   for(int i =0; i < n ; i++)
   {
    for(int j = i + 1; j < n; j++)
    {
        if(arr[i] > arr[j])
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
   }

   printf("sorted array :\n");
   for (int i = 0; i < n; i++)
   {
    printf("%d ", arr[i]);
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

    sort(arr,n);

    return 0;
}
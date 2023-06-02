// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.

#include <stdio.h>

int main()
{
    int arr[10];
    printf("Enter 10 array values :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    float sum_even = 0;
    float sum_odd = 0;

    for (int i = 0; i < 10; i++)
    {
        if(arr[i] % 2 == 0)
        {
            sum_even = sum_even + arr[i];
        }
        else
        {
            sum_odd = sum_odd + arr[i];
        }
    }

    printf("Sum of Even numbers from array is %.2f.\n",sum_even);
    printf("Sum of Odd numbers from array is %.2f.\n",sum_odd);
    return 0;
}
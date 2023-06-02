// 9. Write a function in C to merge two arrays of the same size sorted in descending order.

#include<stdio.h>
int main()
{
    int a[] = {2,4,6,9,10}; //take sorted arrays
    int b[] = {1,5,8,10,11};
    int c[10];
    int i,j,k=0;
    
    for(i = 0,j=0;i<5 && j<5;k++)
    {
        if(a[i]<b[j]) // if element from a is small then add it into c first.
        {
            c[k] = a[i];
            i++;
        }
        else{
            c[k] = b[j];
            j++;
        }
    }
    
    if(i == 5 && j != 5)  // after for loop if i reached to 5 and j not
    {
        for(;j<5;j++)
        {
            c[k++]=b[j];
        }
    }

    if (i != 5 && j == 5) // after for loop if j reached to 5 and i not
    {
        for (; i < 5; i++)
        {
            c[k++] = a[i];
        }
    }

    for(i = 0;i<10;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
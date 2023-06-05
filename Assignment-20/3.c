// 3. Write a function to sort an array of int type values.[void sort(int *ptr, int size);]

#include<stdio.h>

void sort (int *p, int n)
{
    int i,j;

    for(i =0; i<n-1; i++)
    {
        for(j = i+1;j<n;j++)
        {
            if(p[i] > p[j])
            {
                int temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
            
        }
    }
}
int main()
{
   int a[10] = { 23,34,56,3,55,76,32,23,54,54};
   sort(a,10);

   int i;

   for(i = 0;i<10;i++)
   {
    printf("%d ", a[i]);
   }
    return 0;
}
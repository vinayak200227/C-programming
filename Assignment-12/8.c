// 8. Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void binary(int n)
{
    if(n == 0)
        return;
    binary(n/2);
    printf("%d",n%2);
}

int main()
{
    int num;
    printf("Enter decimal number : ");
    scanf("%d",&num);
    binary(num);

    return 0;
}
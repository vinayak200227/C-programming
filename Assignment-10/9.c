// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)

#include<stdio.h>
int check(int digit,int num)
{
    while(num)
    {
        if(num%10 == digit)
            return 1;
        num = num/10;
    }
    return 0;
}

int main()
{
    if(check(2,123))
        printf("Yes.\n");
    else
        printf("No.\n");
}
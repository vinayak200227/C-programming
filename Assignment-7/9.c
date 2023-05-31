// 9. Write a program to check whether a given number is an Armstrong number or not
//(Vinayak Takale)
#include<stdio.h>
#include <math.h>
int main(){
    int x,sum=0;
    printf("Enter a number:\n");
    scanf("%d",&x);
    int count = 0,n=x,a=x,reminder;
    while(n != 0)
    {
        n /=10;
        count ++;
    }
    while(a != 0)
    {
        reminder = a % 10;
        sum = sum + pow(reminder, count);
        a /= 10;
    }
    printf("Number of digits: %d \n",count);
    if(sum == x)
        printf("%d is an Armstrong number.",x);
    else
        printf("%d is not an Armstrong number.",x);

    return 0;
}
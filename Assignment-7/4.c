// 4. Write a program to calculate HCF of two numbers
#include<stdio.h>
int main(){
    int x, y,i;
    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);
    for(i = 1;i<=x*y;i++)
    {
        if((i%x==0) && (i%y==0))
            break;
    }
    printf("HCF of %d and %d is %d.",x,y,x*y/i); // i will be LCM   ..  LCM X HCF = xy
    return 0;
}
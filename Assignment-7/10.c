// 10. Write a program to print all Armstrong numbers under 1000
//(Vinayak Takale)
#include <stdio.h>
#include <math.h>
int main()
{
    int x,flag =0;
    printf("Armstrong numbers under 1000 are : \n");
    for(x =0;x<1000;x++)
    {
        int count = 0, n = x, a = x, reminder, sum = 0;
        while (n != 0)
        {
            n /= 10;
            count++;
        }
        while (a != 0)
        {
            reminder = a % 10;
            sum = sum + pow(reminder, count);
            a /= 10;
        }
        if (sum == x)
            printf("%d \n",x);
        
    }    
    
    return 0;
}

// But our program is not giving 153 ???
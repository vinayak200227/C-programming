// 18. Write a program which takes the month number as an input and display number of
// days in that month.
#include <stdio.h>
int main()
{
    int month_number;
    printf("Enter Month number:\n");
    scanf("%d",&month_number);
    if ((month_number == 1) || (month_number == 3) || (month_number == 5) || (month_number == 7) || (month_number == 8) || (month_number == 10) || (month_number == 12))
        printf("Month has 31 days.");
    else if(month_number == 2)
        printf("Month ha 28 or 29 days.");
    else
        printf("Month ha 30 days.");
        return 0;
}
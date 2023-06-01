// 1. Write a program which takes the month number as an input and display number of days in that month.

#include <stdio.h>

int main()
{
    int month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    // Checking if the entered month number is valid
    if (month >= 1 && month <= 12)
    {
        int days;

        // Assigning the number of days based on the month number
        switch (month)
        {
        case 2:
            days = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
        }

        printf("Number of days in month %d is %d\n", month, days);
    }
    else
    {
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}

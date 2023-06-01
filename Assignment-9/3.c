// 3. Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include <stdio.h>

int main()
{
    int day;

    printf("Enter the day number (1-7): ");
    scanf("%d", &day);

    // Checking if the entered day number is valid
    if (day >= 1 && day <= 7)
    {
        // Displaying the greeting message based on the day number
        switch (day)
        {
        case 1:
            printf("Welcome! Today is Monday.\n");
            break;
        case 2:
            printf("Welcome! Today is Tuesday.\n");
            break;
        case 3:
            printf("Welcome! Today is Wednesday.\n");
            break;
        case 4:
            printf("Welcome! Today is Thursday.\n");
            break;
        case 5:
            printf("Welcome! Today is Friday.\n");
            break;
        case 6:
            printf("Welcome! Today is Saturday.\n");
            break;
        case 7:
            printf("Welcome! Today is Sunday.\n");
            break;
        }
    }
    else
    {
        printf("Invalid day number. Please enter a number between 1 and 7.\n");
    }

    return 0;
}

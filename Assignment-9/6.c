// 6. Program to check whether a year is a leap year or not. Using switch statement
#include<stdio.h>
int main()
{
    int year = 2020;
    switch(year % 100 == 0 )
    {
        case 0:
            switch(year % 4 == 0)
            {
            case 0:
                printf("Not a leap year.");
                break;
            case 1:
                printf("Leap year.");
                break;
            }
            break;
        case 1:
            switch(year % 10 == 0)
            {
                case 0:
                    printf("Not a leap year.");
                    break;
                case 1:
                    printf("Leap year.");
                    break;
            }
            break;
    }
    return 0;
}
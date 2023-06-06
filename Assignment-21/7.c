// 7. Write a program to calculate the difference between two time periods.

//// 1st approach

#include <stdio.h>

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

void calculateTimeDifference(struct Time startTime, struct Time endTime, struct Time *diffTime)
{
    int totalSecondsStart = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;
    int totalSecondsEnd = endTime.hours * 3600 + endTime.minutes * 60 + endTime.seconds;
    int totalSecondsDiff = totalSecondsEnd - totalSecondsStart;

    diffTime->hours = totalSecondsDiff / 3600;
    totalSecondsDiff %= 3600;
    diffTime->minutes = totalSecondsDiff / 60;
    diffTime->seconds = totalSecondsDiff % 60;
}

int main()
{
    struct Time startTime, endTime, diffTime;

    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    calculateTimeDifference(startTime, endTime, &diffTime);

    printf("Time difference: %d hours %d minutes %d seconds\n", diffTime.hours, diffTime.minutes, diffTime.seconds);

    return 0;
}



//// 2nd approach

// #include<stdio.h>

// struct Time {
//     int hour;
//     int min;
//     int sec;
// };

// int main()
// {
//     struct Time t1, t2, t3;

//     printf("Enter the start time (hours minutes seconds): ");
//     scanf("%d %d %d",&t1.hour, &t1.min, &t1.sec);

//     printf("Enter the end time (hours minutes seconds): ");
//     scanf("%d %d %d", &t2.hour, &t2.min, &t2.sec);

//     if(t1.sec < t2.sec)
//     {
//         t1.min--;
//         t1.sec =  60 + t1.sec;
//     }
//     if(t1.min < t2.min)
//     {
//         t1.hour--;
//         t1.min = 60 + t1.min;
//     }
    
//     t3.sec = t1.sec - t2.sec;
//     t3.min = t1.min - t2.min;
//     t3.hour = t1.hour - t2.hour;
    
//     printf("Difference between two time period is- \n%d : %d : %d",t3.hour,t3.min,t3.sec);

//     return 0;
// }




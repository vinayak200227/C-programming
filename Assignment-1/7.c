// 11. WAP to take time as an input in below given format and convert the time format and
//     display the result as given below.
//     User Input date format – “HH : MM”
//     Output format – “HH hour and MM Minute”

#include<stdio.h>
int main(){
    
    int hour, minute;
    printf("Enter time in \"HH:MM\" \n");
    scanf("%d:%d", &hour, &minute);
    printf("%d Hour and %d Minutes", hour, minute);

    return 0;
}
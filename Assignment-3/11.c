// 11. Write a program to take marks of 5 subjects from the user.Assume marks are given out of 100 and
// passing marks is 33. Now display whether the candidate passed the examination or failed.
#include<stdio.h>
int main(){
    float m1, m2, m3, m4, m5, total_marks, percentage;
    printf("Enter marks:\n");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    total_marks = m1 + m2 + m3 + m4 + m5;
    printf("Total marks are %.2f \n",total_marks);
    percentage = total_marks/500 * 100;
    printf("Percentage is %.2f \n", percentage);
    
    if(percentage > 33)
        printf("Candidate passed.\n");
    else
        printf("Candidate is failed.\n");
    return 0;
}
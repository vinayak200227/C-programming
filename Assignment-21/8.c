// 8. Write a program to store information of 10 students and display them using structure.

#include<stdio.h>

struct Student
{
    char name[20];
    int rollno;
    int marks;
} s[10];

int main()
{
    // struct Student s[10];
    int i;
    for(i = 0; i<10;i++)
    {
        printf("Enter student name:\n");
        scanf("%s",s[i].name);  // for taking character input of struct don't use & .

        printf("Enter roll no\n");
        scanf("%d", &s[i].rollno);

        printf("Enter marks\n");
        scanf("%d", &s[i].marks);
    }

    for(i = 0; i<10; i++)
    {
        printf("Name = %s, Roll no = %d, Marks = %d\n",s[i].name,s[i].rollno, s[i].marks);
    }

    return 0;
}
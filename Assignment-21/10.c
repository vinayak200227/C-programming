// 10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
// Physics (each out of 100) using a structure named Marks having elements roll no.,
// name, chem_marks, maths_marks and phy_marks and then display the percentage
// of each student.

#include<stdio.h>

struct Marks{
    int rollNo;
    char name[20];
    float chem_marks;
    float maths_marks;
    float physics_marks;
};
int main()
{
    struct Marks m[5];
    int i;

    for ( i = 0;i<5;i++)
    {
        printf("Enter %d name\n", i+1);
        scanf("%s",m[i].name);

        printf("Enter %d roll no\n", i+1);
        scanf("%d",&m[i].rollNo);

        printf("Enter %d chem marks\n", i+1);
        scanf("%f",&m[i].chem_marks);

        printf("Enter %d physics marks\n", i+1);
        scanf("%f",&m[i].physics_marks);

        printf("Enter %d maths marks\n", i+1);
        scanf("%f",&m[i].maths_marks);
    }

    for(i = 0; i<5; i++)
    {
        printf("name = %s\n",m[i].name);
        printf("Roll No = %d\n",m[i].rollNo);
        printf("Percentage = %.2f\n %", (m[i].chem_marks + m[i].physics_marks + m[i].maths_marks)/3.0);
    }
    return 0;
}
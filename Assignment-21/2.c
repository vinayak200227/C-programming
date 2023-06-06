// 2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]

#include <stdio.h>

struct Employee
{
    int id;
    char name[20];
    int salary;
};
void input(struct Employee *e)
{
    printf("Enter Employee Id\n ");
    scanf("%d",&e->id);

    printf("Enter Employee Name\n");
    fflush(stdin);
    scanf("%s",e->name);

    printf("Enter Employee salary\n");
    scanf("%s",&e->salary);
}
int main()
{
    struct Employee *e;
    input(e);
    return 0;
}
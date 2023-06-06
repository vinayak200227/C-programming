// 3. Write a function to display employee data.[Refer structure from question 1]

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
    scanf("%d", &e->id);

    printf("Enter Employee Name\n");
    fflush(stdin);
    scanf("%s", e->name);

    printf("Enter Employee salary\n");
    scanf("%s", &e->salary);
}
void display(struct Employee e)
{
    printf("Employee Id = %d\n",e.id);
    printf("Employee Name = %s\n",e.name);
    printf("Employee Salary = %d\n",e.salary);
}
int main()
{
    struct Employee a;
    struct Employee *e = &a;
    input(e);
    display(a);
    return 0;
}
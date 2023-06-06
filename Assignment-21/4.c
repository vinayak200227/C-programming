// 4. Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]

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
    printf("Employee Id = %d\n", e.id);
    printf("Employee Name = %s\n", e.name);
    printf("Employee Salary = %d\n", e.salary);
}

int maxsalary(struct Employee e[],int size)
{
    int max = -1,i;

    for(i = 0; i<size;i++)
    {
        if(e[i].salary>max)
        {
            max = e[i].salary;
        }
    }

    return max;
    // printf("Maximum salary = %d\n",max);
}
int main()
{
    struct Employee arr[10];
    struct Employee *p[10];
    for (int i  = 0 ; i< 10; i++)
    {
        p[i] = &arr[i];
        input(p[i]);
    }
    printf("\n \n");
    for (int i = 0; i < 10; i++)
    {
        display(arr[i]);
    }
    printf("\n \n");
    printf("Maximum salary is : %d",maxsalary(arr,10));
    return 0;
}
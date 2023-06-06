// 5. Write a function to sort employees according to their salaries [ refer structure from question 1]

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
    scanf("%d", &e->salary);
}
void display(struct Employee e)
{
    printf("Employee Id = %d\n", e.id);
    printf("Employee Name = %s\n", e.name);
    printf("Employee Salary = %d\n", e.salary);
}
void sortEmployee(struct Employee e[],int size)
{
    int i,j;
    struct Employee temp;
    for(i = 0; i<size-1;i++)
    {
        for(j= i+1;j<size;j++)
        {
            if (e[i].salary > e[j].salary) 
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
}
int main()
{
    struct Employee arr[3];
    struct Employee *p[3];
    for (int i = 0; i < 3; i++)
    {
        p[i] = &arr[i];
        input(p[i]);
    }
    printf("\n \n");
    for (int i = 0; i < 3; i++)
    {
        display(arr[i]);
    }
    printf("\n \n");
    sortEmployee(arr,3);

    printf("\nSorted employees by salary:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Employee %d:\n", i + 1);
        printf("ID: %d\n", arr[i].id);
        printf("Name: %s\n", arr[i].name);
        printf("Salary: %.d\n", arr[i].salary);
        printf("\n");
    }
    return 0;
}
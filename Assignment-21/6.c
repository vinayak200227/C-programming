// 6. Write a function to sort employees according to their names[refer structure from question 1]

#include <stdio.h>
#include<string.h>

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
void sortEmployee_accotoName(struct Employee e[], int size) // pointer to array
{
    int i, j;
    struct Employee temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if ((strcmp(e[i].name,e[j].name)) > 0)
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
    sortEmployee_accotoName(arr, 3);

    printf("\nSorted employees according to their names :\n");
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
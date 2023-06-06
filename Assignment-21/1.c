// 1. Define a structure Employee with member variables id, name, salary

#include<stdio.h>

struct Employee 
{
    int id;
    char name[20];
    int salary; 
};

int main()
{
    struct Employee e;
    e.id = 101;
    e.salary = 100000;
    printf("%d",e.id);

    return 0;
}
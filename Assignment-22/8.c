// 8. Write a program to demonstrate dangling pointers in C.

//Dangling pointer - pointer which points to non existing memory. 

#include<stdio.h>

int *fun()
{
    int x; // x is local variable

    return &x;   // x is only availabe in fun() not present in main
}
int main()
{
    int *ptr = fun(); // Dangling pointer 
    return 0;
}
// 4. Write a program in C to demonstrate how to handle the pointers in the program.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr = (int *)malloc(4);

    if(ptr == NULL)
    {
        printf("Memory Allocation failed");
        return 0;
    }
    return 0;
}
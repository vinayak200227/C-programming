// 1. Write a program to print iNeuron N times on the screen
#include<stdio.h>

int main()
{
    int N;
    printf("Enter value of N : ");
    scanf("%d",&N);
    for(int i= 0; i<N; i++)
    {
        printf("iNeuron\n");
    }
    return 0;
}
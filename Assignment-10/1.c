// 1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float Area(int r);
int main()
{
    int r;
    float area;
    printf("Enter radius of a circle:\n");
    scanf("%d",&r);
    area = Area(r);
    printf("Area of a circle having radius %d is %.2f.",r,area);
    return 0;
}

float Area(int r)
{
    return 3.14 * r * r;
}
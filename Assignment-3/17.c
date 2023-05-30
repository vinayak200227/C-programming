// 17. Write a program which takes the length of the sides of a triangle as an input. Display
// whether the triangle is valid or not .
#include <stdio.h>
int main()
{
    int s1, s2, s3;
    printf("Enter length of sides of triangle:\n");
    scanf("%d%d%d", &s1, &s2, &s3);
    if(((s1 + s2) > s3) && ((s1 + s3) > s2) && ((s2 + s3) > s1))
        printf("Triangle is Valid.");
    else
        printf("Triangle is not valid.");
    return 0;
}
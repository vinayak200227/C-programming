// 9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include <stdio.h>
int main()
{
    int n1 =13, n2=13, n3=99;
    // printf("Enter 3 numbers:\n");
    // scanf("%d %d % d", &n1, &n2, &n3);
    if((n1 > n2) && (n1 > n3))
        printf("%d is greatest.",n1);
    else if((n2 > n1) && (n2 > n3))
        printf("%d is greatest.",n2);
    else if ((n3 > n1) && (n3 > n2))
        printf("%d is greatest.", n3);
    else if((n1 == n2) || (n2 == n3) || (n1 == n3))
        printf("Greatest number is repeated !\n");
    return 0;
}
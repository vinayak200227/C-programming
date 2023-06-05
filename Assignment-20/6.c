// 6. Write a program to calculate the length of the string using a pointer

#include<stdio.h>

int findLength(char *p)
{
    int count = 0;
    for (int i = 0; *(p + i) != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char str1[100] = "Hello";

    int len = findLength(str1);

    printf("Length of %s is %d.",str1,len);

    return 0;
}

// 10. Write a program to print a string in reverse using a pointer

#include<stdio.h>
#include <string.h>

void reverseString(char *p, int n)
{
    printf("String in reverse order : ");
    for (int i = n-1 ; i>=0; i--)
    {
        printf("%c",*(p+i));
    }
}

int main()
{
    char str[100];

    printf("Enter a string :");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';  // removing newline character

    reverseString(str, strlen(str));
    return 0;
}
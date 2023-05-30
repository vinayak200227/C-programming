// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include <stdio.h>
int main()
{
    char c;
    printf("Enter an alphabet:\n");
    scanf("%c", &c);
    if((c >= 65) && (c <= 90))
        printf("Uppercase alphabet.\n");
    else if((c >=97) && (c <= 122))
        printf("Lowercase alphabet.\n");
    else
        printf("Character is not an alphabet.\n");
    return 0;
}
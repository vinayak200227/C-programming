// 16. Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet(lower case), a digit or a special character.
#include <stdio.h>
int main()
{
    char c;
    printf("Enter an alphabet:\n");
    scanf("%c", &c);
    if ((c >= 65) && (c <= 90))
        printf("Character is Uppercase alphabet.\n");
    else if ((c >= 97) && (c <= 122))
        printf("Character is Lowercase alphabet.\n");
    else if ((c >= 48) && (c <= 57))
        printf("Character is Digit.\n");
    else
        printf("Character is special character.\n");

    return 0;
}
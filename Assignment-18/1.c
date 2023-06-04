// 1. Write a function to calculate length of the string

#include <stdio.h>
#include <string.h>

int stringLength(char *str)
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    return length;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from the string
    str[strcspn(str, "\n")] = '\0';

    int length = stringLength(str);

    printf("Length of the string: %d\n", length);

    return 0;
}

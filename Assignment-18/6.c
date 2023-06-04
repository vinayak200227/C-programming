// 6. Write a function to check whether a given string is an alphanumeric string or not .(Alphanumeric string must contain at least one alphabet and one digit)

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isAlphanumeric(char *str)
{
    int hasDigit = 0;
    int hasAlphabet = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if (isdigit(str[i]))
        {
            hasDigit = 1;
        }
        else if (isalpha(str[i]))
        {
            hasAlphabet = 1;
        }

        i++;
    }

    if (hasDigit && hasAlphabet)
    {
        return 1; // Alphanumeric string
    }
    else
    {
        return 0; // Not an alphanumeric string
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from the string
    str[strcspn(str, "\n")] = '\0';

    int isAlphanumericStr = isAlphanumeric(str);

    if (isAlphanumericStr)
    {
        printf("The string is alphanumeric.\n");
    }
    else
    {
        printf("The string is not alphanumeric.\n");
    }

    return 0;
}

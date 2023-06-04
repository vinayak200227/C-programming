// 4. Write a program to convert a given string into uppercase.

#include <stdio.h>

void convertToUpper(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Original string: %s", str);

    convertToUpper(str);

    printf("Uppercase string: %s", str);

    return 0;
}

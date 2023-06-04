// 5. Write a program to convert a given string into lowercase

#include <stdio.h>

void convertToLower(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Original string: %s", str);

    convertToLower(str);

    printf("Lowercase string: %s", str);

    return 0;
}

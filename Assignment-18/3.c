// 3. Write a function to compare two strings.

#include <stdio.h>
#include<string.h>

int stringCompare(char *str1, char *str2)
{
    int i = 0;

    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0' && str2[i] == '\0')
        {
            return 0; // Both strings are equal
        }
        i++;
    }

    return str1[i] - str2[i];
}

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove the newline character from the first string
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove the newline character from the second string
    str2[strcspn(str2, "\n")] = '\0';

    int result = stringCompare(str1, str2);

    if (result == 0)
    {
        printf("Both strings are equal.\n");
    }
    else if (result < 0)
    {
        printf("First string is lexicographically smaller than the second string.\n");
    }
    else
    {
        printf("First string is lexicographically larger than the second string.\n");
    }

    return 0;
}

// 6. Write a program to print the strings which are palindrome in the list of strings.

#include <stdio.h>
#include <string.h>

int isPalindrome(const char *str)
{
    int len = strlen(str);
    int i, j;

    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char strings[5][100];

    printf("Enter 5 strings:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter string %d: ", i + 1);
        fgets(strings[i], sizeof(strings[i]), stdin);

        // Remove the newline character from the string
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }

    printf("Palindromes found in the list:\n");

    for (int i = 0; i < 5; i++)
    {
        if (isPalindrome(strings[i]))
        {
            printf("%s\n", strings[i]);
        }
    }

    return 0;
}

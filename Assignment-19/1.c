// 1. Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.

#include <stdio.h>
#include <string.h>

int countVowels(char *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }

    return count;
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

    printf("\nNumber of vowels in each string:\n");

    for (int i = 0; i < 5; i++)
    {
        int vowelCount = countVowels(strings[i]);
        printf("String %d: %d\n", i + 1, vowelCount);
    }

    return 0;
}

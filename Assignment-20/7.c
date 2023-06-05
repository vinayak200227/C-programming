// 7. Write a program to count the number of vowels and consonants in a string using a pointer.

#include <stdio.h>
#include <ctype.h>

void countVowelsAndConsonants(char *str, int *vowels, int *consonants)
{
    *vowels = 0;
    *consonants = 0;

    while (*str != '\0')
    {
        char ch = tolower(*str);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            (*vowels)++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            (*consonants)++;
        }

        str++;
    }
}

int main()
{
    char str[100];
    int vowels, consonants;

    printf("Enter a string: ");
    gets(str);

    countVowelsAndConsonants(str, &vowels, &consonants);

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

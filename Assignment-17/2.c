// 2. Write a program to count the occurrence of a given character in a given string.

#include <stdio.h>

int countCharacterOccurrences(char str[], char ch)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[100];
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to count: ");
    scanf("%c", &ch);

    int occurrences = countCharacterOccurrences(str, ch);

    printf("Number of occurrences of '%c' in the string: %d\n", ch, occurrences);

    return 0;
}

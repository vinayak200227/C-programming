// 10. Write a function to find the repeated character in a given string.

#include <stdio.h>
#include <string.h>

char findRepeatedCharacter(char *str)
{
    int length = strlen(str);
    int count[256] = {0}; // Assuming ASCII characters

    for (int i = 0; i < length; i++)
    {
        count[str[i]]++;
    }

    for (int i = 0; i < length; i++)
    {
        if (count[str[i]] > 1)
        {
            return str[i];
        }
    }

    return '\0'; // If no repeated character is found
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from the string
    str[strcspn(str, "\n")] = '\0';

    char repeatedChar = findRepeatedCharacter(str);

    if (repeatedChar != '\0')
    {
        printf("The first repeated character in the string is '%c'.\n", repeatedChar);
    }
    else
    {
        printf("There are no repeated characters in the string.\n");
    }

    return 0;
}

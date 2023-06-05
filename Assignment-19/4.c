// 4. Write a program to search a string in the list of strings.

#include <stdio.h>
#include <string.h>

int searchInStrings(char *searchString, char strings[][100], int count)
{
    for (int i = 0; i < count; i++)
    {
        if (strcmp(strings[i], searchString) == 0)
        {
            return i; // Return the index of the matching string
        }
    }

    return -1; // Return -1 if the string is not found
}

int main()
{
    char strings[5][100];
    char searchString[100];

    printf("Enter 5 strings:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter string %d: ", i + 1);
        fgets(strings[i], sizeof(strings[i]), stdin);

        // Remove the newline character from the string
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }

    printf("Enter the string to search: ");
    fgets(searchString, sizeof(searchString), stdin);

    
    searchString[strcspn(searchString, "\n")] = '\0';

    int index = searchInStrings(searchString, strings, 5);

    if (index != -1)
    {
        printf("String '%s' found at index %d\n", searchString, index);
    }
    else
    {
        printf("String '%s' not found\n", searchString);
    }

    return 0;
}


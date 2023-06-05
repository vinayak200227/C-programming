// 3. Write a program to read and display a 2D array of strings in C language.

#include <stdio.h>
#include <string.h>

int main()
{
    char strings[3][100]; 

    printf("Enter 3 strings:\n");

    // Reading strings into the 2D array
    for (int i = 0; i < 3; i++)
    {
        printf("Enter string %d: ", i + 1);
        fgets(strings[i], sizeof(strings[i]), stdin);

        // Remove the newline character from the string
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }

    printf("\nStrings entered:\n");

    // Displaying the strings from the 2D array
    for (int i = 0; i < 3; i++)
    {
        printf("String %d: %s\n", i + 1, strings[i]);
    }

    return 0;
}

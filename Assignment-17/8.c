// 8. Write a program in C to copy one string to another string.

#include <stdio.h>
#include <string.h>

void stringCopy(char *source, char *destination)
{
    int i = 0;

    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';
}

int main()
{
    char source[100];
    char destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    // Remove the newline character from the source string
    source[strcspn(source, "\n")] = '\0';

    stringCopy(source, destination);

    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}

// 2. Write a function to reverse a string.

#include <stdio.h>
#include <string.h>

void reverseString(char *str)
{
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        // Swap characters at start and end indices
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move the start index forward
        start++;

        // Move the end index backward
        end--;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

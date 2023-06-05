// 2. Write a function to swap strings of two char arrays of calling functions.

#include <stdio.h>
#include <string.h>

void swapStrings(char *str1, char *str2)
{
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main()
{
    char str1[100] = "Hello";
    char str2[100] = "World";

    printf("Before swapping: str1 = %s, str2 = %s\n", str1, str2);

    swapStrings(str1, str2);

    printf("After swapping: str1 = %s, str2 = %s\n", str1, str2);

    return 0;
}

// 10. Write a program in C to Find the Frequency of Characters.

#include<stdio.h>

void Frequency(char str[])
{
    int hash[128] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        hash[str[i]] += 1; 
    }
    printf("Char - Frequency\n");
    for(int i = 0; i<128; i++)
    {
        if (hash[i] != 0 & i != 10) // ASCII code 10(LF : Line Feed -character represents the end of a line of text)
        {
            printf(" %c   -   %d\n", i, hash[i]);
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Original string: %s", str);

    Frequency(str);

    return 0;
}

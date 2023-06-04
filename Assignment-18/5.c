// 5. Write a function to transform string into lowercase

#include <stdio.h>
#include <string.h>

void lower(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    lower(str);

    printf("lowercase string: %s\n", str);

    return 0;
}

// 4. Write a function to transform string into uppercase
#include<stdio.h>
#include<string.h>

void upper(char str[])
{
    for(int i = 0; str[i] != '\0';i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z' )
        {
            str[i] = str[i] - 32;
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    upper(str);

    printf("uppercase string: %s\n", str);

    return 0;
}

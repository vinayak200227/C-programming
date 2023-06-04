// 3. Write a program to count vowels in a given string

#include <stdio.h>

int countVowels(char str[])
{
    char vowels[] = {'a','e','i','o','u', 'A','E','I','O','U'};
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        for(int j = 0; j<10; j++)
        {
            if(str[i] == vowels[j])
            {
                count++;
            }
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

    int vowels = countVowels(str);

    printf("Number of vowels in the string: %d\n", vowels);

    return 0;
}

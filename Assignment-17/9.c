// 9. Write a C program to sort a string array in ascending order.

#include <stdio.h>
#include <string.h>

void sortStringArray(char strArray[][100], int size)
{
    char temp[100];

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (strcmp(strArray[i], strArray[j]) > 0)
            {
                strcpy(temp, strArray[i]);
                strcpy(strArray[i], strArray[j]);
                strcpy(strArray[j], temp);
            }
        }
    }
}

int main()
{
    char strArray[100][100];
    int size;

    printf("Enter the number of strings: ");
    scanf("%d", &size);

    getchar(); // Consume the newline character after reading the size

    printf("Enter the strings:\n");
    for (int i = 0; i < size; i++)
    {
        fgets(strArray[i], sizeof(strArray[i]), stdin);

        // Remove the newline character from each string
        strArray[i][strcspn(strArray[i], "\n")] = '\0';
    }

    sortStringArray(strArray, size);

    printf("Sorted strings in ascending order:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", strArray[i]);
    }

    return 0;
}

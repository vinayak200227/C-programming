// 5. Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it.Print the odd email out.

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool hasAtSymbol(const char *email)
{
    // Check if the email address contains '@' symbol
    return strchr(email, '@') != NULL; 
}

int main()
{
    char emails[5][100];

    printf("Enter 5 email addresses:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter email address %d: ", i + 1);
        fgets(emails[i], sizeof(emails[i]), stdin);

        // Remove the newline character from the string
        emails[i][strcspn(emails[i], "\n")] = '\0';
    }

    int oddEmailIndex = -1;

    for (int i = 0; i < 5; i++)
    {
        if (!hasAtSymbol(emails[i]))
        {
            oddEmailIndex = i;
            break;
        }
    }

    if (oddEmailIndex != -1)
    {
        printf("Email address '%s' does not have the '@' symbol.\n", emails[oddEmailIndex]);
    }
    else
    {
        printf("All email addresses have the '@' symbol.\n");
    }

    return 0;
}

// 9. Write a program that asks the user to enter a username. If the username entered is
// one of the names in the list then the user is allowed to calculate the factorial of a
// number. Otherwise, an error message is displayed

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to calculate the factorial of a number
unsigned long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    char usernames[3][20] = {"vinayak", "ankita", "vaibhav"};
    char username[20];
    int number;

    printf("Enter your username: ");
    scanf("%s", username);

    bool isValidUser = false;

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(username, usernames[i]) == 0)
        {
            isValidUser = true;
            break;
        }
    }

    if (isValidUser)
    {
        printf("Enter a number to calculate its factorial: ");
        scanf("%d", &number);

        unsigned long long result = factorial(number);
        printf("The factorial of %d is %llu\n", number, result);
    }
    else
    {
        printf("Error: Invalid username\n");
    }

    return 0;
}

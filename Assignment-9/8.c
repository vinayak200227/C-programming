// 8. Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.

#include <stdio.h>

    int
    main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number >= 0)
    {
    case 1: // Positive number
        number = -number;
        printf("Converted to negative: %d\n", number);
        break;
    case 0: // Negative number
        number = -number;
        printf("Converted to positive: %d\n", number);
        break;
    }

    return 0;
}

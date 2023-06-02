// 1. Write a function to calculate LCM of two numbers.(TSRS)

#include <stdio.h>

int calculateLCM(int a, int b)
{
    int max = (a > b) ? a : b;
    int lcm = max;

    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            break;
        }
        lcm += max;
    }

    return lcm;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int lcm = calculateLCM(num1, num2);

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}

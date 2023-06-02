// 2. Write a function to calculate HCF of two numbers.(TSRS)

#include <stdio.h>

int calculateHCF(int a, int b)
{
    int smaller = (a < b) ? a : b;
    int hcf = 1;

    for (int i = 1; i <= smaller; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    return hcf;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int hcf = calculateHCF(num1, num2);

    printf("HCF of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}

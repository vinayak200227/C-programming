// 4. Write a program in C to find the sum of right diagonals of a matrix.

#include <stdio.h>

int sumRightDiagonals(int matrix[][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += matrix[i][2 - i];
    }
    return sum;
}

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int sum = sumRightDiagonals(matrix);

    printf("\nSum of right diagonals: %d\n", sum);

    return 0;
}

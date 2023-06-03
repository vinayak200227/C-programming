// 5. Write a program in C to find the sum of left diagonals of a matrix.

#include <stdio.h>

int sumLeftDiagonals(int matrix[][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += matrix[i][i];
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

    int sum = sumLeftDiagonals(matrix);

    printf("\nSum of right diagonals: %d\n", sum);

    return 0;
}

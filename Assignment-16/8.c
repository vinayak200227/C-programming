// 8. Write a program in C to print or display an upper triangular matrix.

#include <stdio.h>

void UpperTraingular(int matrix1[][3], int result[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i <= j)
            {
                result[i][j] = matrix1[j][i];
            }
            else
            {
                result[i][j] = 0;
            }
        }
    }
}

void displayMatrix(int matrix[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int result[3][3];

    printf("Matrix 1:\n");
    displayMatrix(matrix1);

    UpperTraingular(matrix1, result);

    printf("\nUpper triangular martix of a given matrix :\n");
    displayMatrix(result);

    return 0;
}

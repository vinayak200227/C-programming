// 3. Write a program in C to find the transpose of a given matrix.

#include <stdio.h>

void Transpose(int matrix1[][3],int result[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = matrix1[j][i];
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

    Transpose(matrix1, result);

    printf("\nTranspose of the matrix:\n");
    displayMatrix(result);

    return 0;
}

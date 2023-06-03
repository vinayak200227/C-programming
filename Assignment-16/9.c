// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.

#include <stdio.h>

int isSparseMatrix(int matrix[][100], int rows, int cols)
{
    int countNonZero = 0;

    // Count the number of non-zero elements
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] != 0)
            {
                countNonZero++;
            }
        }
    }

    // Check if the number of non-zero elements is less than half of total elements
    if (countNonZero < (rows * cols) / 2)
    {
        return 1; // Sparse matrix
    }
    else
    {
        return 0; // Not a sparse matrix
    }
}

int main()
{
    int matrix[100][100];
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isSparse = isSparseMatrix(matrix, rows, cols);

    if (isSparse)
    {
        printf("The matrix is a sparse matrix.\n");
    }
    else
    {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}

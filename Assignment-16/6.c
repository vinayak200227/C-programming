// 6. Write a program in C to find the sum of rows and columns of a Matrix.

#include <stdio.h>

void calculateSum(int matrix[][3], int numRows, int numCols)
{
    int rowSum[numRows];
    int colSum[numCols];

    // Calculate sum of rows
    for (int i = 0; i < numRows; i++)
    {
        int sum = 0;
        for (int j = 0; j < numCols; j++)
        {
            sum += matrix[i][j];
        }
        rowSum[i] = sum;
    }

    // Calculate sum of columns
    for (int i = 0; i < numRows; i++)
    {
        int sum = 0;
        for (int j = 0; j < numCols; j++)
        {
            sum += matrix[j][i];
        }
        colSum[i] = sum;
    }

    // Display sum of rows
    printf("Sum of rows:\n");
    for (int i = 0; i < numRows; i++)
    {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    // Display sum of columns
    printf("\nSum of columns:\n");
    for (int j = 0; j < numCols; j++)
    {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }
}

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int numRows = 3;
    int numCols = 3;

    printf("Matrix:\n");
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    calculateSum(matrix, numRows, numCols);

    return 0;
}

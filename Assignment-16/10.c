// 10. Write a program in C to find the row with maximum number of 1s.

#include <stdio.h>

int findRowWithMaxOnes(int matrix[][100], int rows, int cols)
{
    int MaxOnesRow = 0;
    int MaxOnesCount = 0;

    for(int i = 0; i<rows; i++)
    {
        int count = 0;
        for(int j = 0; j < cols; j++)
        {
            if(matrix[i][j] == 1)
            {
                count++;
            }
        }

        if(count > MaxOnesCount)
        {
            MaxOnesCount = count;
            MaxOnesRow = i;
        }
    }

    return MaxOnesRow;
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

    int row = findRowWithMaxOnes(matrix, rows, cols);

    printf("Row with the maximum number of 1s: %d\n", row);

    return 0;
}
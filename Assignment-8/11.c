#include <stdio.h>

int main()
{
    int i, j, n;
    for (i = 0; i < 5; i++)
    {
        n = 'A';
        for (j = 0; j < 9; j++)
        {
            if (j >= 8 - 4 - i && j < 4)
            {
                printf("%c", n++);
            }
            else if (j == 4)
            {
                printf("%c", n);
            }
            else if (j > 4 && j <= 8 - 4 + i)
            {
                printf("%c", --n);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

/*
Output -

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/
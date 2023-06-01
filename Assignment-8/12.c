#include <stdio.h>

int main()
{
    int i, j, n;
    for (i = 0; i < 4; i++)
    {
        n = 'A';
        for (j = 0; j < 7; j++)
        {
            if (j >= i && j < 3)
            {
                printf("%c", n++);
            }
            else if (j == 3)
            {
                printf("%c", n);
            }
            else if (j > 3 && j < 7 - i)
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

ABCDCBA
 ABCBA
  ABA
   A
   
*/
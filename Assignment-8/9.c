#include <stdio.h>

int main()
{
    int i, j, n;
    for (i = 0; i < 4; i++)
    {
        n = 1;
        for (j = 0; j < 7; j++)
        {
            if (j >= i && j < 3)
            {
                printf("%d", n++);
            }
            else if (j == 3)
            {
                printf("%d", n);
            }
            else if (j > 3 && j < 7 - i)
            {
                printf("%d", --n);
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


1234321
 12321
  121
   1


*/
#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (j <= 8 - 4 + i && j >= 8 - 4 - i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if(j==0)
            {
                printf(" ");
            }
            else if (j > i && j <= 7 - i)
            {
                printf("*");
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

    
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
    

*/
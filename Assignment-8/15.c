#include<stdio.h>
int main()
{
    int i, j;
    for(i = 0; i <= 4; i++)
    {
        for(j = 0;j <= 4; j++)
        {
            if(j ==4 || i ==4 || j == 4 -i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

/*
Output -

    *
   **
  * *
 *  *
*****


*/
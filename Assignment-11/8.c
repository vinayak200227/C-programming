// 8. Write a function to print PASCAL Triangle. (TSRN)

#include <stdio.h>

int fact(int n)
{
    int i, f = 1;
    if(n == 0)
        return 1;
    for (i = 1; i <= n; i++)
        f = f * i;

    return f;
}

int comb(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

void pascal(int n)
{
    int r,j;

    for(j=0;j<n;j++)
    {
        for(r = 0;r<=j;r++)
        {
            printf("%d ",comb(j,r));
        }
        printf("\n");
    }
}
int main()
{
    pascal(5);
}

/*
Output -

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1


*/
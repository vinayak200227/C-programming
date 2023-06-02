// 8. Write a function to calculate the number of arrangements one can make from n items
// and r selected at a time.(TSRS)

//permutation = n!/(n-r)!

#include <stdio.h>

int fact(int n)
{
    int i, f = 1;

    for (i = 1; i <= n; i++)
        f = f * i;

    return f;
}

int perm(int n, int r)
{
    return fact(n) / fact(n - r);
}

int main()
{
    printf("Permutation is %d\n", perm(10, 2));
}

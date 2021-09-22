// 50 次

#include <stdio.h>

double memo[100];

double fun(int n)
{
    if (n == 1)
        return memo[0];
    if (n == 2)
        return memo[1];
    if (!memo[n])
    {
        memo[n] = fun(n - 1) + fun(n - 2);
    }

    return memo[n];
}

int main()
{
    memo[0] = 1;
    memo[1] = 2;
    double res = fun(50);
    printf("%f", res);
}

// output : 20365011074.000000

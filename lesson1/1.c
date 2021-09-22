#include <stdio.h>

int fun(int n)
{
    if (n == 4)
    {
        return 11;
    }
    return ((1.0 / (n + 1))) * (1 + (n + 2) * fun(n + 1));
}

int main()
{
    int res = fun(0);
    printf("%d", res);
    return 0;
}

//output : 59 
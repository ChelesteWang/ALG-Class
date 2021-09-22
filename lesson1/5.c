#include <stdio.h>

int fun(int n, int m)
{
    if (n ==)
    {
        return 3;
    }
    return (fun(n + 1) + n) * 7;
}

int main()
{
    int res = fun(1);
    printf("%d", int(res));
    return 0;
}

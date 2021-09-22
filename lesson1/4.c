#include <stdio.h>

int fun(int n)
{
    if (n == 6)
    {
        return 3;
    }
    return (fun(n + 1) + 2) * 2;
}

int main()
{
    int res = fun(1);
    printf("%d", int(res));
    return 0;
}

// output ：220
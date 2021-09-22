#include <stdio.h>

int fun(int n)
{
    if (n == 9)
    {
        return 2;
    }
    return (fun(n + 1) + 1) * 2;
}

int main()
{
    int res = fun(1);
    printf("%d", int(res));
    return 0;
}

// output ：1022
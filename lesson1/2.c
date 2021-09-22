#include <stdio.h>

int fun(int n)
{
    if (n == 8)
    {
        return 6;
    }
    return (fun(n + 1) - 8 + n) * 2;
}

int main()
{
    int res = fun(2);
    printf("%d", int(res));
    return 0;
}

//output : 144


#include <stdio.h>

void outPut(int target)
{
    printf("%d,", target % 10);
    if (target > 10)
    {
        outPut(target / 10);
    }
    return;
}

int main()
{
    outPut(789654123);
    return 0;
}

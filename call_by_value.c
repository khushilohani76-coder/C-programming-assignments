#include <stdio.h>

void change(int x)
{
    x = 1000;
}

int main()
{
    int a = 30;
    change(a);
    printf("%d", a);
    return 0;
}

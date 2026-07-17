#include <stdio.h>

int power(int a, int n)
{
    if (n == 0)
        return 1;
    else
        return base * power(a, n - 1);
}

int main()
{
    int base, exp;

    printf("Enter a and n: ");
    scanf("%d %d", &a, &n);

    printf("Power = %d", power(a, n));

    return 0;
}
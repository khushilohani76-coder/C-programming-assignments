#include <stdio.h>

union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    union Data d;

    d.i = 200;
    printf("Integer = %d\n", d.i);

    d.f = 11.5;
    printf("Float = %.2f\n", d.f);

    d.c = 'K';
    printf("Character = %c\n", d.c);

    return 0;
}
#include <stdio.h>

struct Matrix
{
    int a[2][2];
};

int main()
{
    struct Matrix m1, m2, result;
    int i, j, k;

    printf("Enter elements of First Matrix (2x2):\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &m1.a[i][j]);
        }
    }

    printf("Enter elements of Second Matrix (2x2):\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &m2.a[i][j]);
        }
    }

    // Matrix Multiplication
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            result.a[i][j] = 0;
            for(k = 0; k < 2; k++)
            {
                result.a[i][j] += m1.a[i][k] * m2.a[k][j];
            }
        }
    }

    printf("\nProduct of Matrices:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ", result.a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
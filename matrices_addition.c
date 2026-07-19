#include <stdio.h>

int main()
{
    int row, col;
    int A[10][10],B[10][10],C[10][10];
    int i,j;

    // Row aur Column input
    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    
    // First Matrix
    printf("Enter elements of first matrix A:\n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Second Matrix
    printf("Enter elements of second matrix B:\n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Addition
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Print Result
    printf("Sum of matrices:\n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
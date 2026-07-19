#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50,60,70};
    int n=7;

     int *ptr = arr;   

    printf("Array elements are:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
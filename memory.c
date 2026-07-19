#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamic Array Create
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    // Pointer Traversal
    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    // Freeing Memory
    free(ptr);

    printf("\nMemory Freed Successfully!");

    return 0;
}
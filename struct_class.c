#include <stdio.h>

struct Rectangle
{
    float length;
    float width;
};

int main()
{
    struct Rectangle r;
    float area, perimeter;

    printf("Enter length: ");
    scanf("%f", &r.length);

    printf("Enter width: ");
    scanf("%f", &r.width);

    area = r.length * r.width;
    perimeter = 2 * (r.length + r.width);

    printf("\nArea = %.2f", area);
    printf("\nPerimeter = %.2f", perimeter);

    return 0;
}
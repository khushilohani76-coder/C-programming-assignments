#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

int main()
{
    struct Student science[3];
    int i;

    // Input details of 5 students
    for(i = 0; i < 3; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &science[i].roll);

        printf("Enter Name: ");
        scanf("%s", &science[i].name);

        printf("Enter Marks: ");
        scanf("%f", &science[i].marks);
    }

    // Display details of 5 students
    printf("\n----- Student Details -----\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No : %d\n", science[i].roll);
        printf("Name    : %s\n", science[i].name);
        printf("Marks   : %.2f\n", science[i].marks);
    }

    return 0;
}
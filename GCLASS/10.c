#include <stdio.h>

struct Student
{
    int rollno;
    char name[50];
    int standard;
    float percentage;
} s1;

void scan()
{
    printf("Enter Roll Number: ");
    scanf("%d", &s1.rollno);

    printf("Enter Name: ");
    scanf("%s", s1.name);

    printf("Enter Standard: ");
    scanf("%d", &s1.standard);

    printf("Enter Percentage: ");
    scanf("%f", &s1.percentage);
}

void disp()
{
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s1.rollno);
    printf("Name: %s\n", s1.name);
    printf("Standard: %d\n", s1.standard);
    printf("Percentage: %.2f\n", s1.percentage);
}

int main()
{

    scan();

    disp();

    return 0;
}

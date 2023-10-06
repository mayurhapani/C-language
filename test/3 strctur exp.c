#include <stdio.h>

struct Student
{
    char name[50];
    int marks[3];
} s1[];

int main()
{
    int nub_std, subj = 3;

    printf("Enter the number of students: ");
    scanf("%d", &nub_std);

    for (int i = 0; i < nub_std; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", s1[i].name);

        for (int j = 0; j < subj; j++)
        {
            printf("Enter marks in subject %d for %s: ", j + 1, s1[i].name);
            scanf("%d", &s1[i].marks[j]);
        }
    }

    printf("\nTotal Marks for Each Student:\n");
    for (int i = 0; i < nub_std; i++)
    {
        int totalMarks = 0;

        for (int j = 0; j < subj; j++)
        {
            totalMarks += s1[i].marks[j];
        }

        printf("%s: %d\n", s1[i].name, totalMarks);
    }

    return 0;
}

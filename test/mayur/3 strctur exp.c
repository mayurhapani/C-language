#include <stdio.h>

struct Student
{
    char name[50];
    int rollno;
    int marks[3];
} s1[20];

int subj = 3;

void getelem();
void display();

int main()
{
    int nub_std;

    printf("Enter the number of students: ");
    scanf("%d", &nub_std);

    getelem(nub_std);

    display(nub_std);

    return 0;
}
void getelem(int nub_std)
{
    for (int i = 0; i < nub_std; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", s1[i].name);

        printf("Enter the roll number of student: ");
        scanf("%d", &s1[i].rollno);

        for (int j = 0; j < subj; j++)
        {
            printf("Enter marks in subject %d for %s: ", j + 1, s1[i].name);
            scanf("%d", &s1[i].marks[j]);
        }
    }
}
void display(int nub_std)
{
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
}

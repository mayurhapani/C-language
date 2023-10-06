#include <stdio.h>

struct Student
{
    char stu_name[50];
    int stu_roll_no;
    int marks[3];
    int total;
};

int main()
{
    int nu_stus;

    printf("Enter the total number of students: ");
    scanf("%d", &nu_stus);

    struct Student students[nu_stus];

    for (int i = 0; i < nu_stus; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].stu_name);

        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &students[i].stu_roll_no);

        for (int j = 0; j < 3; j++)
        {
            printf("Enter marks in subject %d for %s: ", j + 1, students[i].stu_name);
            scanf("%d", &students[i].marks[j]);
        }

        students[i].total = students[i].marks[0] + students[i].marks[1] + students[i].marks[2];
    }

    printf("\nStudent Details and Total Marks:\n");
    for (int i = 0; i < nu_stus; i++)
    {
        printf("Name: %s\n", students[i].stu_name);
        printf("Roll Number: %d\n", students[i].stu_roll_no);
        printf("Total Marks: %d\n", students[i].total);
        printf("\n");
    }

    return 0;
}

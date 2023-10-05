#include <stdio.h>
#include <conio.h>
#include <string.h>

int rollno, math, eng, guj, comp, total, choi, choice, flag = 0, uro_no, count = 0, roll = 0;
float per;
char name[50], ustd_name[50];

FILE *f1;

int search_std(int);
void file_reading();
void printscreen();
void choice_menu();
void choiceloop();
void ifroll();

//-----------------------main--------------------------

int main()
{
    f1 = fopen("stddata.txt", "r");

    printf("\nHow you want to search student?");
    printf("\nEnter 1 by ID\nEnter 2 by name");

    choice_menu();

    return 0;
}

//-----------------------file reading--------------------------
void file_reading()
{
    fscanf(f1, "%d", &rollno);
    fscanf(f1, "%s", name);
    fscanf(f1, "%d", &math);
    fscanf(f1, "%d", &eng);
    fscanf(f1, "%d", &guj);
    fscanf(f1, "%d", &comp);
    fscanf(f1, "%d", &total);
    fscanf(f1, "%f", &per);
}
//-----------------------printing--------------------------
void printscreen()
{
    printf("\nroll number = %d", rollno);
    printf("\nstudent name = %s", name);
    printf("\nmath = %d", math);
    printf("\neng = %d", eng);
    printf("\nguj = %d", guj);
    printf("\ncomp = %d", comp);
    printf("\ntotal = %d", total);
    printf("\nper = %f", per);
}
//-----------------------user choice--------------------------
void choice_menu()
{
    printf("\nEnter your choice : ");
    scanf("%d", &choice);

    while (1)
    {
        file_reading();
        if (choice == 1)
        {
            printf("Enter student roll no : ");
            scanf("%d", &uro_no);

            if (rollno == uro_no)
            {
                flag = 1;
                printscreen();
            }
            if (feof(f1))
            {
                printf("You have enterd wrong choice !\nPlease try again !");
                count = 0;
                choice_menu();
            }
            if (flag == 1)
            {
                break;
            }
        }
    }
}
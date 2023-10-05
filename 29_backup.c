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

// main////////////////////////////////

int main()
{
    f1 = fopen("stddata.txt", "r");

    printf("\nHow you want to search student?");
    printf("\nEnter 1 by ID\nEnter 2 by name");
    // while (1)
    // {
    // file_reading();
    // if (feof(f1))
    // {
    // printf("You have enterd wrong choice !\nPlease try again !");
    // count = 0;
    // choice_menu();
    // break;
    // }
    // if (count == 0)
    // {
    //     choi = choice_menu();
    // }

    // choiceloop();

    choice_menu();
    // search_std(choice);
    if (flag == 1)
    {
        // break;
    }

    // else
    // {
    //     printf("Please enter corrrect choice !");
    //     choice_menu();
    // }

    // printscreen();
    // }

    return 0;
}

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
void choice_menu()
{
    // count = 1;

    printf("\nEnter your choice : ");
    scanf("%d", &choice);

    // return choice;
    search_std(choice);
}
int search_std(int choice)
{
    while (1)
    {
        file_reading();
        if (choice == 1)
        {
            // while (1)
            // {
            // void ifroll();
            if (roll == 0)
            {
                printf("Enter student roll no : ");
                scanf("%d", &uro_no);
                roll = 1;
            }

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
            // }
        }
        else if (choice == 2)
        {
            if (roll == 0)
            {
                printf("Enter student name : ");
                scanf("%s", ustd_name);
                roll = 1;
            }
            if (strcmpi(name, ustd_name) == 0)
            {
                flag = 1;
                printscreen();
            }
            else if (feof(f1))
            {
                printf("You have enterd wrong choice !\nPlease try again !");
                count = 0;
                choice_menu();
            }
        }
        else
        {
            printf("Please enter corrrect choice !");
            choice_menu();
        }
    }
}
// void choiceloop()
// {
// if (count == 0)
// {
// choi = choice_menu();
// }
// }

void ifroll()
{
    if (roll == 0)
    {
        printf("Enter student roll no : ");
        scanf("%d", &uro_no);
        roll = 1;
    }

    if (rollno == uro_no)
    {
        flag = 1;
        printscreen();
    }
    else if (feof(f1))
    {
        printf("You have enterd wrong choice !\nPlease try again !");
        count = 0;
        // void ifroll();
    }
}

#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    int a, b;

    printf("'1' for addition :\n '2' for substraction :\n '3' for multiplication :\n ");
    printf("please select any option : \n");
start:

    scanf("%c", &ch);

    if (ch >= '1' && ch <= '3')
    {
        printf("enter first value :");
        scanf("%d", &a);
        printf("enter second value :");
        scanf("%d", &b);
    }
    else
    {
        printf("enter valid value !\n");
        goto start;
    }

    switch (ch)
    {
    case '1':
        printf("%d + %d = %d", a, b, (a + b));
        break;
    case 50: // '2'
        printf("%d - %d = %d", a, b, (a - b));
        break;
    case '3':
        printf("%d x %d = %d", a, b, (a * b));
        break;
    default:
        printf("invalid input !");
        break;
    }

    return 0;
}
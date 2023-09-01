#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, j = 0, comp;
    char x[50], y[50];

    printf("enter string 1 :");
    scanf("%s", x);

    printf("enter string 2 :");
    scanf("%s", y);

    // case sensetive
    printf("\n1st output is\n");
    comp = strcmp(x, y);
    printf("comparision is =%d\n", comp);

    if (comp == 0)
    {
        printf("both strings are same!");
    }
    else
    {
        printf("both strings are not same!");
    }

    // not case sensetive
    printf("\n2nd output is");
    comp = strcmpi(x, y);
    printf("\ncomparision is =%d\n", comp);

    if (comp == 0)
    {
        printf("both strings are same !");
    }
    else
    {
        printf("both strings are not same !");
    }

    return 0;
}
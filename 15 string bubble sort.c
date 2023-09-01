#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char x[5][50], temp[50];

    // bubble sort
    for (i = 0; i < 5; i++)
    {
        printf("enter name :");
        scanf("%s", x[i]);
    }

    puts("\nbefor sort :");
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", x[i]);
    }

    // swiping
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (strcmp(x[j], x[j + 1]) > 0)
            {
                strcpy(temp, x[j]);
                strcpy(x[j], x[j + 1]);
                strcpy(x[j + 1], temp);
            }
        }
    }

    // final output
    puts("\nafter sort :");
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", x[i]);
    }

    return 0;
}
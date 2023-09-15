#include <stdio.h>

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 3; j++)
        {
            printf("  ");
        }
        for (int k = 0; k <= i && i < 4; k++)
        {
            printf(" *  ");
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("  ");
        }
        for (int j = i; j < 3; j++)
        {
            printf(" *  ");
        }
        printf("\n");
    }
}
#include <stdio.h>

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int k = 4; k > i; k--)
        {
            printf(" *  ");
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j > i; j--)
        {
            printf("  ");
        }
        for (int k = 2 - i; k < 4; k++)
        {
            printf(" *  ");
        }
        printf("\n");
    }

    return 0;
}
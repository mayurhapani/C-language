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
            if (k == 4 || i == 0 || k == i + 1)
            {
                printf(" *  ");
            }
            else
            {
                printf("    ");
            }
        }

        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j > i; j--)
        {
            printf("  ");
        }
        for (int k = 0; k < i + 2; k++)
        {
            if (k == 0 || k == i + 1 || i == 2)
            {
                printf(" *  ");
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
}
#include <stdio.h>

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 4; j > i; j--)
        {
            printf("  ");
        }
        for (int k = 0; k <= i; k++)
        {
            if (k == 0 || k == i)
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
        for (int j = 0; j < i + 2; j++)
        {
            printf("  ");
        }
        for (int k = 3; k > i; k--)
        {
            if (k == 3 || k == i + 1)
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
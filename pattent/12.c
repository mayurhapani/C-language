#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("  ");
        }
        for (int k = 4; k >= i; k--)
        {
            if (i == 0 || k == i || k == 4)
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
#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j > i; j--)
        {
            printf("  ");
        }
        for (int k = 0; k <= i; k++)
        {
            if (k == 0 || k == i || i == 4)
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

    return 0;
}
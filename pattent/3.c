#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 4; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
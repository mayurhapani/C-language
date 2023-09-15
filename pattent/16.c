#include <stdio.h>

int main()
{
    int x = 1, y = 2;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 4; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            if (k == 0 || k == i)
            {
                printf("%d ", x);
            }
            else
            {
                printf("%d ", y);
            }
        }
        printf("\n");
    }
}
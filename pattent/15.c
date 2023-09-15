#include <stdio.h>

int main()
{
    int k = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", k++);
        }
        printf("\n");
    }
}
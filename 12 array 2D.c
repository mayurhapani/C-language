#include <stdio.h>
#define s1 3
#define s2 4
int main()
{
    int i, j, a[s1][s2];

    for (i = 0; i < s1; i++)
    {
        for (j = 0; j < s2; j++)
        {
            printf("enter element : ");
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < s1; i++)
    {
        for (j = 0; j < s2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
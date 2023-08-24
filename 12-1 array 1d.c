#include <stdio.h>

int main()
{
    int i, j, rep, fnd, row, col, a[10][10], flag = 0;

    printf("enter no of row in array : ");
    scanf("%d", &row);
    printf("enter no of colomn in array : ");
    scanf("%d", &col);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("enter value of element : ");
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter value for search : ");
    scanf("%d", &fnd);

    printf("enter value you want to replace with : ");
    scanf("%d", &rep);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (fnd == a[i][j])
            {
                a[i][j] = rep;
                flag++;
            }
        }
    }

    if (flag != 0)
    {
        printf("new array is :\n");
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf(" due to entered value not found, there is no change in array!");
    }

    return 0;
}
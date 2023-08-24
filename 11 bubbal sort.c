#include <stdio.h>
#define size 50
int main()
{
    int i, j, n, count = 0, temp, a[size];

    printf("enter lanth of series :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter value of elements :");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                count++;
            }
        }
        if (!count)
        {
            break;
        }
        printf("\n pass %d is : ", i + 1);
        for (j = 0; j < n; j++)
        {
            printf(" %d ", a[j]);
        }
    }
    printf("\n shorted elements are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
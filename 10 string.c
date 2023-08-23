#include <stdio.h>
#define size 60

int i, n, sum = 0, a[size];

int main()
{
    printf("enter lanth of array :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter velue of elements :");
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("ans is :");

    for (i = 0; i < n; i++)
    {
        printf("\n %d", a[i]);
    }
    printf("\n sum of array is : %d", sum);
}
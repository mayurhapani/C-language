#include <stdio.h>
#define SIZE 10

int main()
{
    int a[SIZE];
    int pos = 0, neg = 0, zero = 0;

    printf("Enter 10 integer elements:\n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (a[i] > 0)
        {
            pos++;
        }
        else if (a[i] < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }

    printf("Total positive numbers: %d\n", pos);
    printf("Total negative numbers: %d\n", neg);
    printf("Total zeros: %d\n", zero);

    return 0;
}

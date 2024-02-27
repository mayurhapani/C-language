#include <stdio.h>
#define SIZE 10

int main()
{
    int a[SIZE];
    int posi = 0, nega = 0, zero = 0;

    printf("Enter 10 integer elements:\n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (a[i] > 0)
        {
            posi++;
        }
        else if (a[i] < 0)
        {
            nega++;
        }
        else
        {
            zero++;
        }
    }

    printf("Total positive numbers: %d\n", posi);
    printf("Total negative numbers: %d\n", nega);
    printf("Total zeros: %d\n", zero);

    return 0;
}

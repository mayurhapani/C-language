#include <stdio.h>
#define SIZE 7

void display(int a[])
{
    printf("Odd numbers in the array:\n");
    for (int i = 0; i < SIZE; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%d ", a[i]);
        }
    }
}

int main()
{
    int a[SIZE];

    printf("Enter 7 integer elements:\n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &a[i]);
    }

    display(a);

    return 0;
}

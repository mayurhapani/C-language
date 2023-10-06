#include <stdio.h>
#define SIZE 3

int a[SIZE][SIZE], b[SIZE][SIZE], result[SIZE][SIZE];

void getelem()
{

    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
}

void display(int x[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
}

void add(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nFirst Matrix:\n");
    display(a);

    printf("\nSecond Matrix:\n");
    display(b);

    printf("\nResultant Matrix (Sum of Matrices):\n");
    display(result);
}

int main()
{
    getelem();

    add(a, b, result);

    return 0;
}

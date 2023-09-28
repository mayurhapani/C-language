#include <stdio.h>
#include <conio.h>
#define SIZE 7

int getElements(int x[])
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter elemets for %d : ", i);
        scanf("%d", &x[i]);
    }
}

int sort(int x[])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (x[j] > x[j + 1])
            {
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", x[i]);
    }
}

void binnsrc(int x[], int src)
{
    int mid, i, s = 0, e = SIZE - 1;
    for (mid = (s + e) / 2; s <= e; mid = (s + e) / 2)
    {
        if (x[mid] == src)
        {
            printf("\nelement %d fonud", src);
            return;
        }
        else if (x[mid] > src)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    printf("\nElement %d not found !", src);
}

int main()
{
    int x[SIZE], src;

    getElements(x);
    sort(x);

    printf("\nEnter element for search :");
    scanf("%d", &src);

    binnsrc(x, src);

    return 0;
}
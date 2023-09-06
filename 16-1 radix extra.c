#include <stdio.h>
#define size 5

int a[size], x[10][size], lan;

void negblock()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < size; j++)
        {
            x[i][j] = -1;
        }
    }
}
void userinput()
{
    for (int i = 0; i < size; i++)
    {
        printf("enter element for %d = ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}
int findmaxlen()
{
    int max;
    max = a[0];
    for (int i = 1; i < size; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("\nmax=%d", max);
    for (lan = 0; max != 0; lan++)
    {
        max /= 10;
    }
    printf("\nlan=%d", lan);

    return lan;
}
int findblock(int a, int b)
{
}

int main() // main
{
    negblock();
    userinput();
    findmaxlen();
    for (int i = 1; i <= lan; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int block = findblock(a[j], i);
            fillblock(a[j], block);
        }
    }

    return 0;
}
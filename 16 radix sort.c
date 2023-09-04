#include <stdio.h>
#include <string.h>
#define size 5

int a[size], x[10][size];

void fillnull() // add -1 in every shell
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < size; j++)
        {
            x[i][j] = -1;
        }
    }
}
void userinput() // user input
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("enter element :");
        scanf("%d", &a[i]);
    }
}
int passes() // find max number and lanth of number
{
    int i, max, lan = 0;
    max = a[0];
    for (i = 1; i < size; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    // printf("\nmax = %d", max);
    for (lan = 0; max != 0; lan++)
    {
        max /= 10;
    }
    // printf("\nlan=%d", lan);
    return lan;
}
int findblock(int x, int y)
{
    for (int i = y; i > 1; i--)
    {
        x /= 10;
    }
    int ans = x % 10;
    return ans;
}
void fillblock(int a, int b)
{
    for (int i = 0; i < size; i++)
    {
        if (x[b][i] == -1)
        {
            x[b][i] = a;
            return;
        }
    }
}
void getandempty()
{
    int m = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (x[i][j] != -1)
            {
                a[m++] = x[i][j];
                x[i][j] = -1;
            }
        }
    }
}
void output()
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int i, j;

    fillnull();          // add -1 in every shell
    userinput();         // user input
    int pass = passes(); // find max number and lanth of number
    for (i = 1; i <= pass; i++)
    {
        for (j = 0; j < size; j++)
        {
            int ans = findblock(a[j], i);
            // printf("\n%d", ans);
            fillblock(a[j], ans);
        }
        getandempty();
        printf("\npass no %d = ", i);
        output();
    }

    return 0;
}
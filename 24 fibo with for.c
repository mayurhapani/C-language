#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int fibo(int l, int p, int x)
{
    // printf("%d %d %d", l, p, x);

    int c;
    for (int i = 0; i < x; i++)
    {
        printf("%d ", l);
        c = l + p;
        l = p;
        p = c;
    }
    // return 0;
}

int main()
{
    int x;
    printf("input lanth of fibo ser. :");
    scanf("%d", &x);

    fibo(0, 1, x);

    return 0;
}
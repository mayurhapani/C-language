#include <stdio.h>
#include <conio.h>

int fibo(int l, int p, int x)
{
    int c;
    printf("%d ", l);
    c = l + p;

    if (x > 1)
    {
        fibo(p, c, x - 1);
    }
}

int main()
{
    int x;

    printf("enter lanth :");
    scanf("%d", &x);

    fibo(0, 1, x);

    return 0;
}
#include <stdio.h>

int main()
{
    int a, b, *x, *y;
    a = 10, b = 20;
    x = &a;
    y = &b;

    printf("a=%d b=%d total=%d", *x, *y, (*x + *y));

    return 0;
}
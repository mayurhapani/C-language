#include <stdio.h>
#include <conio.h>

int fact(int x)
{
    // printf("%d", x);
    static int ans = 1;

    if (x > 1)
    {
        ans = x * fact(x - 1);
    }
    return ans;
    // printf("%d", ans);
}

int main()
{
    int x;
    printf("enter lanth :");
    scanf("%d", &x);

    int a = fact(x);

    printf("%d", a);

    return 0;
}
#include <stdio.h>
#include <conio.h>

int fact(int x)
{
    static int ans = 1;
    if (x > 1)
    {
        ans = ans * fact(x - 1);
    }
    return ans;
    // printf("%d", ans);
}

int main()
{
    int x;
    printf("enter lanth :");
    scanf("%d", &x);

    fact(x);

    // printf("%d", x);

    return 0;
}
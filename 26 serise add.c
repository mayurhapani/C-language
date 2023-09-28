#include <stdio.h>
#include <conio.h>

int addseri(int x)
{
    static int ans = 1;
    if (x > 1)
    {
        ans = x + addseri(x - 1);
    }

    return ans;
}

int main()
{
    int x;
    printf("enter last num :");
    scanf("%d", &x);

    int ans = addseri(x);

    printf("total of serise is : %d", ans);

    return 0;
}
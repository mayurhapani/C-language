#include <stdio.h>

int *pointerdemo(int *m, int *n)
{
    int *ans;
    *ans = (*m + *n);
    printf(" ");
    return ans;
}

int main()
{
    int a, b, *ans;
    a = 20;
    b = 30;
    ans = pointerdemo(&a, &b);

    printf("a=%d b=%d total=%d", a, b, *ans);

    return 0;
}
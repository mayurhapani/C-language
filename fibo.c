#include <stdio.h>

void fibo(int ord)
{
    int l = 0, p = 1, c, i;
    for (i = 1; i <= ord; i++)
    {
        c = l + p;
        printf("%d ", l);
        l = p;
        p = c;
    }
}
float sumOfNum(float x, float y) // parametarized
{
    return (x + y);
}
void main()
{

    int order;
    float ans;
    printf("Enter the order of the series:");
    scanf("%d", &order);
    fibo(order);
    ans = sumOfNum(1.5, 6.7);
    printf("\nThe addition=%f", ans);
}
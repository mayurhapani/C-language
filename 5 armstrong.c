#include <stdio.h>
#include <math.h>

int main()
{
    int n, aaa, n1, rem, sum = 0, count = 0;

    printf("enter any number between 2-10000 :");
    scanf("%d", &n);

    n1 = n;

    while (n1 != 0)
    {
        n1 /= 10;
        count++;
    }

    n1 = n;

    while (n1 != 0)
    {
        rem = n1 % 10;
        aaa = 1;
        for (int i = 0; i < count; i++)
        {
            aaa = aaa * rem;
        }
        sum += aaa;
        printf("rem=%d sum=%d\n", rem, sum);
        // sum = sum + (rem * rem * rem);
        n1 /= 10;
    }
    if (sum == n)
    {
        printf("the number %d is armstrong number", n);
    }
    else
    {
        printf("the number %d is not armstrong number due to sum = %d", n, sum);
    }

    return 0;
}
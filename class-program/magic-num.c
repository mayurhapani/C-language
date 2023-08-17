#include <stdio.h>
#include <conio.h>

int main()
{
    int n, n1, i, sum = 0, ans = 0;

    printf("enter any number :");
    scanf("%d", &n);

    n1 = n;

    while (n1 != 0)
    {
        sum += n1 % 10;
        // printf("\n sum = %d", sum);
        n1 /= 10;

        if (n1 == 0 && sum >= 10)
        {
            n1 = sum;
            sum = 0;
        }
    }
    if (sum == 1)
    {
        printf("the number %d is magic number", n);
    }
    else
    {
        printf("the number %d is not magic number", n);
    }

    return 0;
}
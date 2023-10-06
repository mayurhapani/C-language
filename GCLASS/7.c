#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, sum, count = 0;

    for (n = 1; n < 10000; n++)
    {
        sum = 0;

        for (i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }

        if (sum == n)
        {
            printf("%d \n", n);
            count++;
        }
    }
    printf("total count %d of perfect no. between 1-10000", count);

    return 0;
}
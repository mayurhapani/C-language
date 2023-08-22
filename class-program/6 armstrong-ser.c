#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, n1, aaa, rem, count = 0, sum = 0, end = 10000;

    // printf("enter last velue (lower then 10000) :");
    // scanf("%d", &end);

    for (n = 1; n <= end; n++)
    {
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
            sum += pow(rem, count);
            n1 /= 10;
        }

        if (sum == n)
        {
            printf("%d ,\n", n);
        }
        count = 0;
        sum = 0;
    }

    return 0;
}
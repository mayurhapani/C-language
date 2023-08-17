#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, n1, count = 0, sum = 0, end;

    printf("enter last velue (lower then 10000) :");
    scanf("%d", &end);

    for (n = 1; n <= end; n++)
    {
        n1 = n;

        while (n != 0)
        {
            n /= 10;
            count++;
        }
        n = n1;

        while (n != 0)
        {
            n %= 10;
            sum += pow(n, count);
            n /= 10;
        }

        if (sum == n1)
        {
            printf("%d ,", n1);
        }
    }

    return 0;
}
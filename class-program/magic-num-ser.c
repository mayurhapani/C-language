#include <stdio.h>
#include <conio.h>

int main()
{
    int n, sum = 0, start, end = 10000;

    for (start = 1; start <= end; start++)
    {
        n = start;
        while (n != 0)
        {
            sum += n % 10;
            n /= 10;
            if (n == 0 && sum >= 10)
            {
                n = sum;
                sum = 0;
            }
        }
        if (sum == 1)
        {
            printf("%d ,", start);
        }
        sum = 0;
    }

    return 0;
}

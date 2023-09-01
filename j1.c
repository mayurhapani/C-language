#include <stdio.h>
#include <math.h>
int main()
{
    int num, sum = 0, num1, digits = 0, r, tot;
    printf("Enter any number");
    scanf("%d", &num);
    num1 = num;

    while (num1 != 0)
    {
        digits++;
        num1 = (int)num1 / 10;
        printf("\n%d ", digits);
    }

    printf("\noutside while %d ", digits);
    num1 = num;
    while (num1 != 0)
    {
        r = num1 % 10;
        tot = 1;
        for (int j = 1; j <= digits; j++)
        {
            tot *= r;
        }

        sum = sum + tot;
        num1 = (int)num1 / 10;

        printf("\nr = %d sum=%d  num1=%d tot=%d", r, sum, num1, tot);
    }
    printf("\noutside while sum=%d  num1=%d", sum, num1);
    if (num == sum)
    {
        printf("The numer %d is an armstrong number", num);
    }
    else
    {
        printf("The numer %d is not an armstrong number", num);
    }

    return 0;
}
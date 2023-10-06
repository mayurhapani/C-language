#include <stdio.h>
#include <conio.h>

void cheackno(int n)
{
    int i, sum = 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        printf("The number %d is perfect number", n);
    }
    else
    {
        printf("The number %d is not perfect number", n);
    }
}

int main()
{

    int n;

    printf("Enter any value for cheke it is perfect or not :");
    scanf("%d", &n);

    cheackno(n);

    return 0;
}
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, flag = 1;

    printf("pleas enter number :");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1 && n>0)
    {
        printf("the number %d is prime", n);
    }
    else
    {
        printf("the number %d is not prime", n);
    }

    return 0;
}
#include <stdio.h>

int Prime(int *n)
{
    int flag = 1;

    for (int i = 2; i < *n; i++)
    {
        if (*n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1 && *n > 0)
    {
        printf("the number %d is prime number", *n);
    }
    else
    {
        printf("the number %d is not prime number", *n);
    }
}

int main()
{
    int n, *ptr;

    printf("Enter an number: ");
    scanf("%d", &n);

    ptr = &n;

    Prime(ptr);

    return 0;
}

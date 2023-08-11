#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, j, flag, count = 0;

    printf("enter last number of series (between 2-1000) :");
    scanf("%d", &n);

    if (n >= 2 && n <= 1000)
    {
        for (j = 2; j <= n; j++)
        {
            flag = 1;
            for (i = 2; i < j; i++)
            {
                if (j % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                printf("%d \n", j);
                count++;
            }
        }
        
        printf("\n total numbr out of %d is %d", n,count);
    }
    else
    {
        printf("please enter valid number!");
    }

    return 0;
}
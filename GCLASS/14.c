#include <stdio.h>
#include <conio.h>

void getElements(int x[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter elements :");
            scanf("%d", &x[i][j]);
        }
    }
}
int findElements(int x[3][3], int src)
{
    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (x[i][j] == src)
            {
                printf("\nfound element %d at x[%d][%d] position.", src, i, j);
                count++;
            }
        }
    }

    if (!count)
    {
        printf("element %d not found !");
    }
    else
    {
        printf("\ntotal number of elemets found : %d", count);
    }
    // return 0;
}

int main()
{
    int x[3][3], src;

    getElements(x);
    printf("enter element for serch : ");
    scanf("%d", &src);
    findElements(x, src);

    return 0;
}
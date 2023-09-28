#include <stdio.h>
#include <conio.h>
#define SIZE 5

int getElements(int x[])
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("enter elements for %d :", i);
        scanf("%d", &x[i]);
    }
    // return;
}
int findElements(int x[], int src)
{
    int count = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (x[i] == src)
        {
            printf("\nfound element %d at %d position.", src, i + 1);
            count++;
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
    int x[SIZE], src;

    getElements(x);
    printf("enter element for serch : ");
    scanf("%d", &src);
    findElements(x, src);

    return 0;
}
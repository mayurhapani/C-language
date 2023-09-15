#include <stdio.h>

#define size 10

int a[size] = {1, 2, 3, 6, 5, 4, 9, 8, 7, 10};

void sum(int *s) // sum
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(s + i);

        // printf("%d ", sum);
    }
    printf("total of array= %d\n", sum);
}
void sorting1(int *s)
{
    // printf(" %d\n", *s);
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (*(s + j) > *(s + j + 1))
            {
                // printf("s+j=%d j=%d", *(s + j), j);

                int temp = *(s + j);
                *(s + j) = *(s + j + 1);
                *(s + j + 1) = temp;
                // printf("temp=%d ", temp);
            }
        }
    }
}
void disp(int *d)
{
    // printf("*d=%d ", *d);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(d + i));
    }
    printf("\n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", *(d + i));
    }
}

int main()
{
    int *p;
    // sum of array
    p = &a[0];

    sum(p);
    sorting1(p);
    disp(p);

    return 0;
}
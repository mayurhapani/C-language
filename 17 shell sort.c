#include <stdio.h>

#define size 7

int gap = size / 2, i, pass = 1, flag, a[size] = {164, 101, -564, -25, 54, 4698, 641};

void disp()
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    disp();
    do
    {
        do
        {
            flag = 0;
            for (int i = 0; i < size - gap; i++)
            {
                if (a[i] > a[i + gap])
                {
                    int temp = a[i];
                    a[i] = a[i + gap];
                    a[i + gap] = temp;
                    flag++;
                }
            }

        } while (flag != 0);
        // printf("\n");
        printf("\ngap %d pass %d : ", gap, pass++);
        disp();

        gap /= 2;

    } while (gap != 0);

    return 0;
}

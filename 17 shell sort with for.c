#include <stdio.h>

#define size 7

int a[size] = {164, 101, -564, -25, 54, 4698, 641};
int gap = size / 2;

void disp()
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    // printf("gap=%d", gap);
    for (int i = 1; gap != 0; i++)
    {
        int flag = 1;
        // printf("\ni = %d", i);
        // printf("\nflag1=%d ", flag);
        for (int j = 0; flag != 0; j++)
        {
            flag = 0;
            for (int k = 0; k < size - gap; k++)
            {
                if (a[k] > a[k + gap])
                {
                    int temp = 0;
                    temp = a[k];
                    a[k] = a[k + gap];
                    a[k + gap] = temp;
                    flag++;
                }
                // printf("\nflag=%d k=%d size-gap=%d ", flag, k, size - gap);
                // disp();
            }
        }
        printf("\ngap %d pass %d : ", gap, i);
        disp();
        // printf("\ndone");
        gap /= 2;
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int i, j, temp, count = 0;
    char m[50];

    printf("enter string :");
    gets(m);

    for (i = 0; m[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d\n", count);

    // in capital
    for (i = 0; i < count; i++)
    {
        if (m[i] >= 'a' && m[i] <= 'z')
        {
            m[i] -= 32;
        }
    }
    printf("sring in capitel : %s", m);
}

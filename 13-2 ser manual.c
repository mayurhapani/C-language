#include <stdio.h>
#include <string.h>

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
        if (m[i] > 'a' && m[i] < 'z')
        {
            m[i] -= 32;
        }
    }
    printf("sring in capitel : %s", m);

    // for small letter
    for (i = 0; i < count; i++)
    {
        if (m[i] > 'A' && m[i] < 'Z')
        {
            m[i] += 32;
        }
    }
    printf("\nsmall sring is : %s\n", m);

    // revers 1
    printf("revers 1 = ");
    for (i = count - 1; i >= 0; i--)
    {
        printf("%c", m[i]);
    }

    // revers 2
    for (i = 0, j = count - 1; i < count / 2; i++, j--)
    {
        temp = m[i];
        m[i] = m[j];
        m[j] = temp;
    }
    printf("\nrevers 2 = %s", m);

    // lenth
    for (i = 0; m[i] != '\0'; i++)
    {
    }
    printf("\nlanth of string is =%d", i);

    return 0;
}
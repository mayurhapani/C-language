#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, j = 0;
    char x[50], y[50];

    printf("enter sring 1 :");
    scanf("%s", x);

    printf("enter string 2 :");
    scanf("%s", y);

    while (x[i] != '\0')
    {
        i++;
    }
    while (y[j] != '\0')
    {
        x[i] = y[j];
        i++;
        j++;
    }

    x[i] = '\0';

    printf("\nstring 1 is now = %s\nstring 2 is = %s", x, y);

    // part 2 (shotr-cut)
    strcat(x, y);
    printf("\n\nsring short-cut=%s", x);

    return 0;
}
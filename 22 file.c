#include <stdio.h>

int main()
{
    FILE *f1, *f2;

    char x;

    f1 = fopen("data.txt", "r");
    f2 = fopen("22data.txt", "a");

    while ((x = getc(f1)) != EOF)
    {
        printf("%c", x);
        fprintf(f2, "%c", x);
    }
    fclose(f1);
    fclose(f2);
    return 0;
}
#include <stdio.h>

int main()
{
    FILE *f1, *f2;

    char x;

    f1 = fopen("data1.txt", "r");
    f2 = fopen("data2.txt", "w");

    while ((x = getc(f1)) != EOF)
    {
        printf("%c", x);
        fprintf(f2, "%c", x);
    }
    fclose(f1);
    fclose(f2);
    return 0;
}
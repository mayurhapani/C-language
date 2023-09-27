#include <stdio.h>

int main()
{
    FILE *f1;
    char x;

    f1 = fopen("data.txt", "w");

    printf("file start : ");

    while ((x = getchar()) != EOF)
    {
        fprintf(f1, "%c", x);
    }

    fclose(f1);

    return 0;
}
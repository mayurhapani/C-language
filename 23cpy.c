#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *f1, *f2;
    char x;

    f1 = fopen(argv[1], "r");
    f2 = fopen(argv[2], "w");
    // f1 = fopen("data.txt", "r");
    // f2 = fopen("data1.txt", "w");

    while ((x = getc(f1)) != EOF)
    {
        fprintf(f2, "%c", x);
        printf("%c", x);
    }
    fclose(f1);
    fclose(f2);

    printf("file copy successfull..");

    return 0;
}
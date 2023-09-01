#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char ch, s[50], x[50];

    printf("1 :");
    scanf("%c", &ch); // a

    printf("2 :");
    scanf("%s", &s); // bbb

    fflush(stdin);
    printf("3 :");
    scanf("%[^\n]s", x);

    printf("%c", ch);
    printf("\n%s\n", s);
    puts(x);

    return 0;
}
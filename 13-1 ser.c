#include <stdio.h>
#include <string.h>

int main()
{
    char m[50];

    puts("enter sring :");
    gets(m);
    printf("entered name is : %s\n", m);

    strupr(m);
    puts("in upercase :");
    puts(m);

    strlwr(m);
    puts("in lowercase :");
    puts(m);

    strrev(m);
    printf("in reverse : %s", m);

    printf("\nlanth of string is : %d", strlen(m));

    int len = strlen(m);
    printf("\nlenth is: %d", len);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], str3[100];
    char srcchar, *sub;

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    // strlen 1
    printf("(DEMO 1) Length of str1: %d\n", strlen(str1));

    // strcpy 2
    strcpy(str3, str1);
    printf("(DEMO 2) Copied string (str3): %s\n", str3);

    // strcat 3
    strcat(str1, str2);
    printf("(DEMO 3) Concatenated string (str1 and str2): %s\n", str1);

    // strcmp 4
    int cmp = strcmp(str1, str2);
    if (cmp == 0)
    {
        printf("(DEMO 4) str1 and str2 are equal\n");
    }
    else if (cmp < 0)
    {
        printf("(DEMO 4) str1 is less than str2\n");
    }
    else
    {
        printf("(DEMO 4) str1 is greater than str2\n");
    }

    // character search in str1 5
    printf("(DEMO 5) Enter a character to search in str1: ");
    scanf(" %c", &srcchar);

    // Demonstrate strchr
    char *foundChar = strchr(str1, srcchar);
    if (foundChar != NULL)
    {
        printf("(DEMO 5) '%c' found at position: %ld\n", srcchar, foundChar - str1 + 1);
    }
    else
    {
        printf("(DEMO 5) '%c' not found in str1\n", srcchar);
    }
    // Convert the string to lowercase
    strlwr(str1);
    printf("(DEMO 6) Lowercase: %s\n", str1);

    // Convert the string to uppercase
    strupr(str2);
    printf("(DEMO 7) Uppercase: %s\n", str2);

    return 0;
}

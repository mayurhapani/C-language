#include <stdio.h>

int main()
{
    int a[100], size, search;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("for %d :", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &search);

    printf("Element %d found at the following positions:\n", search);
    for (int i = 0; i < size; i++)
    {
        if (a[i] == search)
        {
            printf("Index %d\n", i);
        }
    }

    return 0;
}

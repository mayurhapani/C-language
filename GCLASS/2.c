#include <stdio.h>

void check(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) {
            printf("%d is even\n", *(arr + i));
        } else {
            printf("%d is odd\n", *(arr + i));
        }
    }
}

int main() {
    int a[100], size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("for %d :",i);
        scanf("%d", &a[i]);
    }

    printf("Checking odd/even numbers:\n");
    check(a, size);

    return 0;
}

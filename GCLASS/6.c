#include <stdio.h>

float add(float x, float y)
{
    return x + y;
}

int main()
{
    float a, b, ans;

    printf("Enter the first float number: ");
    scanf("%f", &a);

    printf("Enter the second float number: ");
    scanf("%f", &b);

    ans = add(a, b);

    printf("Sum of %.2f and %.2f is %.2f\n", a, b, ans);

    return 0;
}
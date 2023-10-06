#include <stdio.h>

void multiply(float *p, float x, float y)
{
    *p = x * y;
}

int main()
{
    float a, b, ans;
    float *p = &ans;

    printf("Enter the first float number: ");
    scanf("%f", &a);

    printf("Enter the second float number: ");
    scanf("%f", &b);

    multiply(p, a, b);

    printf("The product of %.2f and %.2f is %.2f\n", a, b, *p);

    return 0;
}

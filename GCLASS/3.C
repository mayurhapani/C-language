#include <stdio.h>

int Magic(int);
int Palindrome(int);

int main()
{
    int choice, number;

    do
    {
        printf("\nMenu:\n");
        printf("1. Check if a number is a magic number\n");
        printf("2. Check if a number is a palindrome\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &number);
            if (Magic(number))
            {
                printf("%d is a magic number.\n", number);
            }
            else
            {
                printf("%d is not a magic number.\n", number);
            }
            break;

        case 2:
            printf("Enter a number: ");
            scanf("%d", &number);
            if (Palindrome(number))
            {
                printf("%d is a palindrome number.\n", number);
            }
            else
            {
                printf("%d is not a palindrome number.\n", number);
            }
            break;

        case 3:
            printf("Exiting the program.\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}

int Magic(int n)
{
   int n1 = n, sum=0;

    while (n1 != 0)
    {
        sum += n1 % 10;
        // printf("\n sum = %d", sum);
        n1 /= 10;

        if (n1 == 0 && sum >= 10)
        {
            n1 = sum;
            sum = 0;
        }
    }
    return (sum == 1);
}

int Palindrome(int n)
{
    int original = n, sum = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum * 10 + rem;
        n /= 10;
    }
    return (original == sum);
}

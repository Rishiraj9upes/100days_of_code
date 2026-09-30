#include <stdio.h>

int main()
{
    int n, i, isPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    isPrime = 1;

    if (n < 2)
    {
        isPrime = 0;
    }

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
        }
    }

    if (isPrime == 1)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not prime\n");
    }

    return 0;
}

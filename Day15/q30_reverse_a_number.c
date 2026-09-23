#include <stdio.h>

int main()
{
    int n, digit, reverse;

    printf("Enter a number: ");
    scanf("%d", &n);

    reverse = 0;

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("%d\n", reverse);

    return 0;
}

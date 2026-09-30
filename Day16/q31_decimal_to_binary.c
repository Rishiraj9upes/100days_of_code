#include <stdio.h>

int main()
{
    int n, remainder;
    long binary, place;

    printf("Enter a number: ");
    scanf("%d", &n);

    binary = 0;
    place = 1;

    while (n != 0)
    {
        remainder = n % 2;
        binary = binary + remainder * place;
        place = place * 10;
        n = n / 2;
    }

    printf("%ld\n", binary);

    return 0;
}

#include <stdio.h>

int main()
{
    int n, i, product;

    printf("Enter n: ");
    scanf("%d", &n);

    product = 1;

    for (i = 2; i <= n; i = i + 2)
    {
        product = product * i;
    }

    printf("%d\n", product);

    return 0;
}

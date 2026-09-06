#include <stdio.h>

int main()
{
    int a, b, sum, diff, product;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    diff = a - b;
    product = a * b;

    printf("Sum=%d, Diff=%d, Product=%d, ", sum, diff, product);

    if (b != 0)
    {
        printf("Quotient=%d\n", a / b);
    }
    else
    {
        printf("Quotient=not defined\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    float p, r, t, si, ci, amount;
    int i;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;

    amount = p;
    for (i = 1; i <= t; i++)
    {
        amount = amount * (1 + r / 100);
    }
    ci = amount - p;

    printf("Simple Interest=%g, Compound Interest=%g\n", si, ci);

    return 0;
}

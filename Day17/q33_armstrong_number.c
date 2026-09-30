#include <stdio.h>

int main()
{
    int n, temp, digit, count, i, power, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    count = 0;
    temp = n;

    while (temp != 0)
    {
        count = count + 1;
        temp = temp / 10;
    }

    sum = 0;
    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;

        power = 1;
        for (i = 1; i <= count; i++)
        {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == n)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }

    return 0;
}

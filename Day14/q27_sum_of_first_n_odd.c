#include <stdio.h>

int main()
{
    int n, i, count, sum;

    printf("Enter n: ");
    scanf("%d", &n);

    sum = 0;
    count = 0;
    i = 1;

    while (count < n)
    {
        sum = sum + i;
        count = count + 1;
        i = i + 2;
    }

    printf("%d\n", sum);

    return 0;
}

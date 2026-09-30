#include <stdio.h>

int main()
{
    int n, temp, digit, reverse;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    reverse = 0;

    while (temp != 0)
    {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    if (reverse == n)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }

    return 0;
}

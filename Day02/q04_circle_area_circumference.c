#include <stdio.h>

int main()
{
    float pi = 3.14159;
    float radius, area, circumference;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}

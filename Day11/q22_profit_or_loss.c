#include <stdio.h>

int main()
{
    float cost, selling, percentage;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cost, &selling);

    if (selling > cost)
    {
        percentage = (selling - cost) * 100 / cost;
        printf("Profit %g%%\n", percentage);
    }
    else if (selling < cost)
    {
        percentage = (cost - selling) * 100 / cost;
        printf("Loss %g%%\n", percentage);
    }
    else
    {
        printf("No Profit No Loss\n");
    }

    return 0;
}

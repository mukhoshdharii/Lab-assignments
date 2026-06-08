#include <stdio.h>

int main()
{
    int p;
    float si, r, t;
    printf("Enter the principal amount: ");
    scanf("%d", &p);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    printf("Enter the time(y): ");
    scanf("%f", &t);

    si = (float)(p * r * t) / 100;
    printf("your simple interest = %.2f", si);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    int p;
    float r, a, t, ci, result;
    printf("Enter the principal amount: ");
    scanf("%d", &p);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    printf("Enter the period of time: ");
    scanf("%f", &t);

    a = (1 + (r / 100));
    result = p * pow(a, t); // pow(a,t)=a^t
    ci = result - p;
    printf("%.2f", ci);

    return 0;
}
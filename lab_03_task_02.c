#include <stdio.h>

int main()
{
    int n, i, sum;

    printf("Enter the last number of the series: ");
    scanf("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("%d", sum);

    printf("Enter the last number of the series: ");
    scanf("%d", &n);

    sum = 0;
    for (i = 11; i <= n; i += 11)
    {
        sum += i;
    }

    printf("%d\n", sum);
    return 0;
}
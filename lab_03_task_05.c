#include <stdio.h>

int main()
{
    int a, n, i, sum;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Enter the power: ");
    scanf("%d", &n);
    sum = a;
    i = 1;
    while (i < n)
    {
        sum = sum * a;
        i++;
    }
    printf("%d", sum);

    return 0;
}
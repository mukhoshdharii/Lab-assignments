#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a: "); // 6
    scanf("%d", &a);
    printf("Enter b: "); // 4
    scanf("%d", &b);

    a = a + b; // now a = 10
    b = a - b; // I've to print a's value 6 in b. so 10-4(b)=6(a)
    a = a - b;

    printf("After swapping the values: \n");
    printf("a = %d\n", a);
    printf("b = %d", b);

    return 0;
}
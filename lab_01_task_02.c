#include <stdio.h>
int main()
{
    int a, b;
    char c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the operator(+, -, *, /): ");
    scanf(" %c", &c);
    
    if (c == '+')
    {
        printf("The addition result is = %d", a + b);
    }
    else if (c == '-')
    {
        printf("The substraction result is = %d", a - b);
    }
    else if (c == '*')
    {
        printf("The multiplication result is = %d", a * b);
    }
    else if (c == '/')
    {
        printf("The division result is = %d", a / b);
    }
    return 0;
}

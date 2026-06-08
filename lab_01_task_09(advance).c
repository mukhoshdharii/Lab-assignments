#include <stdio.h>

int main()
{
    char ch;
    float r, a, ar, br, at, bt;
    printf("What shape do you want to work on?\n 'c' for circle\n 's' for square\n 'r' for rectangle\n 't' for triangle \n \n Enter your choice: ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'c':
        printf("Enter the radius: ");
        scanf("%f", &r);
        printf("The area of the circle with radius %.1f is %.2f", r, 3.1416 * r * r);
        break;
    case 's':
        printf("Enter length: ");
        scanf("%f", &a);
        printf("The area of the square = %.1f", a * a);
        break;

    case 'r':
        printf("Enter length: ");
        scanf("%f", &ar);
        printf("Enter width: ");
        scanf("%f", &br);
        printf("The area of the rectangle = %.1f", ar * br);
        break;
    case 't':
        printf("Enter length: ");
        scanf("%f", &at);
        printf("Enter height: ");
        scanf("%f", &bt);
        printf("The area of the triangle = %.1f", .5 * at * bt);
        break;
        return 0;
    }
    return 0;
}
#include <stdio.h>

int main(){
    float a,b;
    printf("Enter length: ");
    scanf("%f", &a);
    printf("Enter width: ");
    scanf("%f", &b);
    printf("The area of the rectangle = %.1f", a*b );
    return 0;
}
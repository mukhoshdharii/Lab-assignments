#include <stdio.h>

int main(){
    float r;
    printf("Enter the radius: ");
    scanf("%f",&r);
    printf("The area of the circle with radius %.1f is %.2f", r, 3.1416*r*r);
    return 0;
}
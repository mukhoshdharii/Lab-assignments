#include <stdio.h>

int main(){
    int a,b,c;
    float sum;
    printf("Enter the first number: ");
    scanf("%d", &a); 
    printf("Enter the second number: "); 
    scanf("%d", &b); 
    printf("Enter the third number: "); 
    scanf("%d", &c); 
    sum=(float) (a+b+c)/3;
    printf("%.2f", sum);
    return 0;
}
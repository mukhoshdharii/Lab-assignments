#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter first angel: ");
    scanf("%d",&a);
    printf("Enter second angel: ");
    scanf("%d",&b);
    printf("Enter third angel: ");
    scanf("%d",&c);
    if(a+b+c==180){
        printf("the triangle is valid.");
    }
    else printf("The triangle is not valid");
    return 0;
}
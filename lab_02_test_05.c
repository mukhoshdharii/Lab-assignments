#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);

    if(a>b && a>c){
        
        printf("%d is maximum between %d, %d and %d",a,a,b,c);
        if(b>c){
            printf("%d is minimum between %d, %d and %d\n",c,a,b,c);
        }
        else{
            printf("%d is minimum between %d, %d and %d",b,a,b,c);
        }
    }
    else if(b>a && b>c){
        printf("%d is maximum between %d, %d and %d\n",b,a,b,c);
        if(a>c){
            printf("%d is minimum between %d, %d and %d",c,a,b,c);
        }
        else{
            printf("%d is minimum between %d, %d and %d",a,a,b,c);
        }
    }
    else if(c>a && c>b){
        printf("%d is maximum between %d, %d and %d\n",c,a,b,c);
        if(a>b){
            printf("%d is minimum between %d, %d and %d",b,a,b,c);
        }
        else{
            printf("%d is minimum between %d, %d and %d",a,a,b,c);
        }
    }
    return 0;
}
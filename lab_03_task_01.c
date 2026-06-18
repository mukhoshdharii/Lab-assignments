#include <stdio.h>

int main(){
    int a;
    printf("Even numbers: \n");
    for(a=0; a<=20; a=a+2)
    {
        
        printf("%d,",a);
    }
    printf("\nOdd numbers: \n");
    for(a=1; a<=20; a=a+2)
    {
        
        printf("%d,",a);
    }
    return 0;
}
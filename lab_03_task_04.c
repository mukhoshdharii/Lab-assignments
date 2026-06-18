#include <stdio.h>

int main(){
    int n,i,sum;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=0;i<=10; i++){
        sum=i*n;
        printf("%d*%d=%d\n",n,i,sum);
    }
    return 0;
}
#include <stdio.h>

int main(){
    int n,i,first,second,next;
    printf("Enter: ");
    scanf("%d",&n);
    first=0;
    second=1;
    for(i=1; i<=n; i++){
        printf("%d", first);
        next=first+second;
        first=second;
        second=next;
    }
    
   
    return 0;
}
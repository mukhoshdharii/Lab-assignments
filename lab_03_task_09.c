#include <stdio.h>

int main(){
    int a,n, i,reverse=0,reminder;
    printf("Enter a number: ");
    scanf("%d", &n);
    a=n;
    for(i=0; n!=0; i++){
        reminder=n%10;
        reverse=reverse*10+reminder;
        n=n/10;
    }
    if(a==reverse){
        printf("Palindrome");
    }
    else{
    printf("no");}
    
    
    return 0;
}
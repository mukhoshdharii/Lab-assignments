#include <stdio.h>

int main(){
     int a,b,temp;      //'temp' means temporary value

     printf("enter first number: ");
     scanf("%d",&a); 

     printf("enter second number: "); 
     scanf("%d",&b); 
     
     temp=a;
     a=b;
     b=temp;
     
     printf("After swapping the values: \n");
     printf("a=%d\n",a); 
     printf("b=%d\n",b); 
     return 0;
}
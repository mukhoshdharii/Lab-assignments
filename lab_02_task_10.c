#include <stdio.h>

int main(){
    int m;
    printf("Enter mark: ");
    scanf("%d",&m);
    if(m>=80 && m<=100){
        printf("Grade: 'A+'");
    }
    else if(m>=70 && m<=79){
        printf("Grade: 'A'");
    }
    else if(m>=60&& m<=69){
        printf("Grade: 'B'");
    }
    else if(m>=50&& m<=59){
        printf("Grade: 'c'");
    }
    else if(m>=40&& m<=49){
        printf("Grade: 'D'");
    }
    else if(m<40){
        printf("Grade: 'F'");
    }
    else printf("invalid number.");
    return 0;
}
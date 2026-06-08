#include <stdio.h>

int main(){
    int n;
    float y,m;
    printf("Enter the number of days: ");
    scanf("%d", &n);
    y=n/365;
    m=n/30;
    printf("%d Days = %.1f years.\n", n,y);
    printf("%d Days = %.1f months.", n,m);
    return 0;
}
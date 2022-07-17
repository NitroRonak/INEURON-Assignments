// Write a program to calculate LCM of two numbers
#include<stdio.h>
int main(){
    int a,b,i;
    printf("Enter  a:\n");
    scanf("%d",&a);
    printf("Enter b:\n");
    scanf("%d",&b);
    int l=a>b?a:b;
    for(i=l;i<=a*b;i+=l){
        if(i%a==0 && i%b==0)
        break;
    }
    printf("%d",i);
    return 0;
}
// Write a program to check whether roots of a given quadratic equation are real & 
// distinct, real & equal or imaginary root
#include<stdio.h>
int main(){
    int a,b,c;
    int result=0;
    printf("Enter the cofficient a ,b ,c equation");
    scanf("%d %d %d",&a,&b,&c);
    result=(b*b)-4*a*c;
    if(result==0){
        printf("real and equal roots");
    }
    else if(result>0){
        printf("real and unequal roots");
    }
    else{
        printf("imaginary roots");
    }
    return 0;
}
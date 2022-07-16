// Write a program to print greater between two numbers. Print one number of both are 
// the same.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    if(a>b || a==b){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
    return 0;
}
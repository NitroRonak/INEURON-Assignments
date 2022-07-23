// Write a program to calculate factorial of a number
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number the value of n:\n");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d",fact);
    return 0;
}
// Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2*n-1;i>0;i-=2){
        printf("%d ",i);
    }
    return 0;
}
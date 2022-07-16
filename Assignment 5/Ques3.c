// Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n>=1){
        printf("%d ",n);
        n--;
    }
    return 0;
}
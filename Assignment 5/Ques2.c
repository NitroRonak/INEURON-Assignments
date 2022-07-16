// Write a program to print the first N natural numbers.
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        printf("%d ",i);
        i++;
    }
    return 0;
}
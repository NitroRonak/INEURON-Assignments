// Write a program to print the first N even natural numbers
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",2*i);
    }
    return 0;
}
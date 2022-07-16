// Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",i*i*i);
    }
    return 0;
}
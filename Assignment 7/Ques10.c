// Write a program to reverse a given number
#include<stdio.h>
int main(){
    int n,y=0;
    printf("Enter n:\n");
    scanf("%d",&n);
    while(n>0){
        int rem=n%10;
        y=(y*10)+rem;
        n=n/10;
    }    
    printf("%d",y);
    return 0;
}
// Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    if(count==3){
        printf("Three digit number");
    }
    else{
        printf("Not three digit number");
    }
    return 0;
}
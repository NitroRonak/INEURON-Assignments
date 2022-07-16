//Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if(n>0){
        printf("Positive");
    }
    else{
        printf("Non-Positive");
    }
    return 0;
}
// Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if((n%3==0) && (n%2==0)){
        printf("Divisible by both 3 and 2");
    }
    else{
        printf("Not divisible by both");
    }
    return 0;
}
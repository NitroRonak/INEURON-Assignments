// Write a program to check whether a given number is a Prime number or
// not
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int prime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=0;
        }
    }
    if(prime){
        printf("Prime\n");
    }
    else{
        printf("Not Prime\n");
    }
    return 0;
}

// Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=2*i;
    }
    printf("%d\n",sum);
    return 0;
}
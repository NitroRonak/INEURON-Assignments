//  Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number the value of n:\n");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=(i*i*i);
    }
    printf("%d\n",sum);
    return 0;
}
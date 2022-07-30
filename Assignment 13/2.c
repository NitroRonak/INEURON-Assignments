// Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int SumofOddNatual(int n,int sum){
    if(n==0)
        return sum;
    if(n%2!=0)
        sum+=n;
    SumofOddNatual(n-1,sum);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",SumofOddNatual(n,0)); 
    return 0;
}
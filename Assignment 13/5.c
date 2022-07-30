// Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sumOfDigit(int n,int sum){
    if(n==0)
        return sum;
    sum+=n%10;        
    sumOfDigit(n/10,sum);

}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sumOfDigit(n,0));
    return 0;
}
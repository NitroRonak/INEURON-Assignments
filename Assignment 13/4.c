//  Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int SumOfSquareNatural(int n){
    if(n==0)
        return 0;
    return n*n+SumOfSquareNatural(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",SumOfSquareNatural(n));
    return 0;
}
#include<stdio.h>
int SumofNatual(int n){
    if(n==0)
        return 0;
    return n+SumofNatual(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",SumofNatual(n));
    return 0;
}
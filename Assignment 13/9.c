#include<stdio.h>
int countDigit(int n,int count){
    if(n==0)
        return count;
    countDigit(n/10,count+1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",countDigit(n,0));
    return 0;
}
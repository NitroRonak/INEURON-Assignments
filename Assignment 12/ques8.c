#include<stdio.h>
void decimalTobinary(int n){
    if(n==0)
        return;
    decimalTobinary(n/2);
    printf("%d",n%2);
}
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    decimalTobinary(n);
    return 0;
}
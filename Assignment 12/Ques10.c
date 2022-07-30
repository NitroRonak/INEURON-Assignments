#include<stdio.h>
void reverseOfNumber(int n){
    if(n==0)
        return;
    printf("%d",n%10);
    reverseOfNumber(n/10);
}
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    reverseOfNumber(n);
    return 0;
}
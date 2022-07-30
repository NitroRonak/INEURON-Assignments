#include<stdio.h>
void reverseN_natural(int n){
    if(n==0)
        return;
    printf("%d ",n);
    reverseN_natural(n-1);
}
int main(){
    int n;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    reverseN_natural(n);
    return 0;
}

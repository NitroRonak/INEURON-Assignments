#include<stdio.h>
void reverseOddNatural(int n){
    if(n==0)
        return;
    printf("%d ",2*n-1);
   reverseOddNatural(n-1);
}
int main(){
    int n;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    reverseOddNatural(n);
    return 0;
}

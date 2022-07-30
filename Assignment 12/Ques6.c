#include<stdio.h>
void reverseEvenNatural(int n){
    if(n==0)
        return;
    printf("%d ",2*n);
   reverseEvenNatural(n-1);
}
int main(){
    int n;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
   reverseEvenNatural(n);
    return 0;
}

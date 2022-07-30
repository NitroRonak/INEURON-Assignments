#include<stdio.h>
void squareOfNatural(int n){
    if(n==0)
        return;
    squareOfNatural(n-1);
    printf("%d ",n*n);
}
int main(){
    int n;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    squareOfNatural(n);
    return 0;
}

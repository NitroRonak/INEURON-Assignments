#include<stdio.h>
void decimalToOctal(int n){
    if(n==0)
        return;
    decimalToOctal(n/8);
    printf("%d",n%8);
    
}
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    decimalToOctal(n);
    return 0;
}
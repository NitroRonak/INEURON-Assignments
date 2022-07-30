#include<stdio.h>
void oddNatural(int n){
    if(n==0)
        return;
   oddNatural(n-1);
    printf("%d ",2*n-1);
}
int main(){
    int n;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    oddNatural(n);
    return 0;
}

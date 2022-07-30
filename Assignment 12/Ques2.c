#include<stdio.h>
void N_naturalNumber(int n){
    if(n==0)
        return;
    printf("%d ",n);
    N_naturalNumber(n-1);
}
int main(){
    int n;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    N_naturalNumber(n);
    return 0;
}
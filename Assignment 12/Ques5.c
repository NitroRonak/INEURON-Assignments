#include<stdio.h>
void evenNaturalNumber(int n){
    if(n==0)
        return;
  evenNaturalNumber(n-1);
    printf("%d ",2*n);
}
int main(){
    int n;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
   evenNaturalNumber(n);
    return 0;
}

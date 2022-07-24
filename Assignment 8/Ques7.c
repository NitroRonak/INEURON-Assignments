/*
    **********
    ****  ****
    ***    ***
    **      **
    *        *
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf("*");
        }
        for(int k=2;k<2*i;k++){
            printf(" ");
        }
        for(int l=1;l<=n-i+1;l++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
/*
    ABCDEFGFEDCBA
    ABCDEF FEDCBA
    ABCDE   EDCBA
    ABCD     DCBA
    ABC       CBA
    AB         BA
    A           A
*/
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            printf("%c",64+j);
        }
        for(int k=1;k<2*i-2;k++){
            printf(" ");
        }
        if(i==1){
            for(int t=n-i;t>=1;t--){
                printf("%c",64+t);
            }
        }
        if(i>1){
            for(int l=n-i+1;l>=1;l--){
                printf("%c",64+l);
            }
        }
        printf("\n");
    }
    return 0;
}
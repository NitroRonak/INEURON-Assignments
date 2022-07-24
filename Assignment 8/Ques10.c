#include<stdio.h>
/*
        1234321
        123 321
        12   21
        1     1
*/
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            printf("%d",j);
        }
        for(int k=1;k<2*i-2;k++){
            printf(" ");
        }
        if(i==1){
            for(int t=n-i;t>=1;t--){
                printf("%d",t);
            }
        }
        if(i>1){
            for(int l=n-i+1;l>=1;l--){
                printf("%d",l);
            }
        }
        printf("\n");
    }
    return 0;
}
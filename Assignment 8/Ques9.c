/*
        1234321
         12321
          121
           1
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        for(int k=1;k<=n-i+1;k++){
            printf("%d",k);
        }
        for(int l=n-i;l>=1;l--){
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}
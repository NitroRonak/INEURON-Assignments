/*
        1
       121
      12321
     1234321 
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int l=i;l>1;l--){
            printf("%d",l-1);
        }
        printf("\n");
    }
    return 0;
}
/*
        *********
         *******
          *****
           ***
            *
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        for(int k=i-1;k<=2*n-1-i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
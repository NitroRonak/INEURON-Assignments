/*
            *
           * *
          *   *
         *     *
        ********* 
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x=1;
    int y=2*n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*n;j++){
            if(j==x|| j==y || i==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        x++;
        y--;
        printf("\n");
    }
    return 0;
}
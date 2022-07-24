/*
            *
           * *
          *   *
         *     *
        ********* 
*/
include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x=n;
    int y=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*n;j++){
            if(j==x|| j==y || i==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        x--;
        y++;
        printf("\n");
    }
    return 0;
}
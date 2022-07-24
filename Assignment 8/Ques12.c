#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            printf("  ");
        }
        for(int k=1;k<=n-i+1;k++){
            printf("%c ",(64+k));
        }
        for(int l=n-i;l>=1;l--){
            printf("%c ",(64+l));
        }
        printf("\n");
    }
    return 0;
}
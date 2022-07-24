#include<stdio.h>
/*
              A
           A  B  A
        A  B  C  B  A
     A  B  C  D  C  B  A
*/
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            printf("%c ",(64+k));
        }
        for(int l=i;l>1;l--){
            printf("%c ",(64+l-1));
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a[10];
    int evenSum=0;
    int oddSum=0;
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        if(a[i]%2==0){
            evenSum+=a[i];
        }
        else{
            oddSum+=a[i];
        }
    }
    printf("Even element sum = %d\n",evenSum);
    printf("Odd element sum = %d\n",oddSum);
    return 0;
}
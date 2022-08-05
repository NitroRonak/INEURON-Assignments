#include<stdio.h>
void smallest(int a[]){
    int mini=a[0];
    for(int i=0;i<10;i++){
        if(a[i]<mini){
            mini=a[i];
        }
    }
    printf("smallest number is %d",mini);
}
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    smallest(a);
    return 0;
}
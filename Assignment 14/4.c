#include<stdio.h>
void greatest(int a[]){
    int maxi=a[0];
    for(int i=0;i<10;i++){
        if(a[i]>maxi){
            maxi=a[i];
        }
    }
    printf("Greatest number is %d",maxi);
}
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    greatest(a);
    return 0;
}
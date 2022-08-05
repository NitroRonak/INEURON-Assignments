#include<stdio.h>
int main(){
    int a[10];
    float sum=0;
    float avg=0;

    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        sum+=a[i];
    }
    avg=sum/10.0;
    printf("%f",avg);
    return 0;
}    
#include<stdio.h>
#include<limits.h>
void secondSmallest(int a[],int n){
    int mini=INT_MAX;
    int second=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<mini){
            second=mini;
            mini=a[i];
        }
        if(a[i]>mini && a[i]<second){
                second=a[i];
        }
    }
    printf("secondSmallest number is %d",second);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    secondSmallest(a,n);
    return 0;
}
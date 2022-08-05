#include<stdio.h>
#include<limits.h>
void secondLargest(int a[],int n){
    int maxi=INT_MIN;
    int second=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>maxi){
            second=maxi;
            maxi=a[i];
        }
        else{
            if(a[i]>second && a[i]<maxi)
                second=a[i];
        }
    }
    printf("secondLargest number is %d",second);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    secondLargest(a,n);
    return 0;
}
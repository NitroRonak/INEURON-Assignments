#include<stdio.h>
void sort_element(int a[]){
    for(int i=0;i<10-1;i++){
        for(int j=0;j<10-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void display(int a[]){
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    sort_element(a);
    display(a);
    return 0;
}
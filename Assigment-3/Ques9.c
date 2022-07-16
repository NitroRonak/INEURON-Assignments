// Write a program to find the greatest among three given numbers. Print number once 
// if the greatest number appears two or three times
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b){
        if(a>=c){
            printf("Gretest number is %d",a);
        }
        else{
            printf("Gretest number is %d",c);
        }
    }
    else if(b>=a){
        if(b>=c){
            printf("Gretest number is %d",b);
        }
        else{
            printf("Gretest number is %d",c);
        }
    } 
    return 0;
}
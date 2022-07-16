// Write a program to print a table of N.
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=10){
        printf("%dx%d = %d\n",n,i,(n*i));
        i++;
    }
    return 0;
}
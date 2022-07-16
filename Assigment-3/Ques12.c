//  Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main(){
    char c;
    printf("Enter the alphabet\n");
    scanf("%c",&c);
    if(c>='a' && c<='z'){
        printf("lowercase");
    }
    else{
        printf("uppercase");
    }
    return 0;
}
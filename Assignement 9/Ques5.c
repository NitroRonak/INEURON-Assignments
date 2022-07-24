#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch(n){
        case 1: printf("good\n");
            break;
        
        case 2: printf("better\n");
            break;
        
        case 3: printf("best\n");
            break;
        
        default: printf("invalid\n");        
    }
    return 0;
}
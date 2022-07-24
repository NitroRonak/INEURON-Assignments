#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    switch(n>0){
        case 1: printf("%d",-n);
            break;
        case 0: printf("%d",abs(n));
            break;
    }   
    return 0;
}
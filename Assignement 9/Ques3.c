#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Hello Coders!\nHave nice monday\n");
            break;
        case 2:
            printf("Hello Coders!\nHave nice tuesday\n");
            break;
        case 3:
            printf("Hello Coders!\nHave nice wednesday\n");
            break;
        case 4:
            printf("Hello Coders!\nHave nice thursday\n");
            break;
        case 5:
            printf("Hello Coders!\nHave nice friday\n");
            break;
        case 6:
            printf("Hello Coders!\nHave nice Saturday\n");
            break;
        case 7:
            printf("Hello Coders!\nHave nice sunday\n");
            break;
        default:
            printf("Invalid week day\n");
            break;
    }
    return 0;
}
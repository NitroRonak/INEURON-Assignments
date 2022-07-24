#include<stdio.h>
#include<stdlib.h>
int main(){
    int c,a,b;
    while(1){
        printf("Enter the choice.\n");
        printf("1 for Addition.\n");
        printf("2 for Subtraction.\n");
        printf("3 for Multiplication.\n");
        printf("4 for Division.\n");
        printf("5 for Exit.\n");
        scanf("%d",&c);
        switch(c){
            case 1:
                printf("Enter the two numbers.\n");
                scanf("%d %d",&a,&b);
                printf("%d + %d = %d\n",a,b,a+b);
                break;
            case 2:
                printf("%d - %d = %d\n",a,b,a-b);
                break;
            case 3:
                printf("Enter the two numbers.\n");
                scanf("%d %d",&a,&b);
                printf("%d * %d = %d\n",a,b,a*b);
                break;
            case 4:
                printf("Enter the two numbers.\n");
                scanf("%d %d",&a,&b);
                printf("%d / %d = %d\n",a,b,a/b);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    return 0;
}
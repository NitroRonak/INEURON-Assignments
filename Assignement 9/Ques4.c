#include<stdio.h>
int main(){
    int choice;
    int a,b,c;
    while(1){
        printf("Enter the choice:\n");
        printf("1 to check for Isosceles triangle.\n");   
        printf("2 to check for Right Angled triangle.\n");   
        printf("3 to check for Equilateral triangle.\n");   
        printf("0 for exit.\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter the three sides of triangle.\n ");
            scanf("%d %d %d",&a,&b,&c);
            if(a==b || b==c || c==a){
                printf("Isosceles Triangle.\n");
            }
            break;

        case 2:
            printf("Enter the three sides of triangle.\n ");
            scanf("%d %d %d",&a,&b,&c);
            if((a*a)==(b*b)+(c*c) || (b*b)==(a*a)+(c*c) || (c*c)==(a*a)+(b*b)){
                printf("Right Angled Triangle.\n");
            }
            break;

        case 3:
            printf("Enter the three sides of triangle.\n ");
            scanf("%d %d %d",&a,&b,&c);
            if(a==b && b==c){
                printf("Equilateral Triangle.\n");
            }
            break;
        case 0:
            exit(0);
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}
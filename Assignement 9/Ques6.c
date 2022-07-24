#include<stdio.h>
int main(){
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    switch(year%100==0){
        case 1:
            switch(year%400==0){
                case 1: printf("leap year\n");
                    break;
                case 0: printf("not a leap year\n");
                    break;
            }
            break;
        case 0:
            switch(year%4==0){
                case 1:printf("leap year\n");
                    break;
                case 0:printf("not aleap year\n");
                    break;
            }
            break;
    }
    return 0;
}
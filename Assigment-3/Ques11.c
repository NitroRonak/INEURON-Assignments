// Write a program to take marks of 5 subjects from the user. Assume marks are given 
// out of 100 and passing marks is 33. Now display whether the candidate passed the 
// examination or failed
#include<stdio.h>
int main(){
    float s1,s2,s3,s4,s5;
    printf("Enter the marks of 5 subjects\n");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
    float total=s1+s2+s3+s4+s5;
    float percentage=(total/500.0)*100;
    if(percentage>=33){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
    return 0;
}
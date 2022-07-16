// Write a program to ceck whether a given caracter is an alphabet (uppercase), an 
// alphabet (lower case), a digit or a special caracte
#include<stdio.h>
int main(){
    char c;
	scanf("%c",&c);
	if(c >= 65 && c <= 90)
		printf("upper");
	else if(c >= 97 && c <= 122)
		printf("lower");
	else if(c >= 48 && c <= 57)
		printf("digit");
	else
		printf("special character");
    return 0;
}
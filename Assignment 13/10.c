#include<stdio.h>
int Calculate_power(int base,int power,int i){
    if(power==0)
        return i;
    i*=base;
    Calculate_power(base,power-1,i);
}
int main(){
    int base,power;
    scanf("%d %d",&base,&power);
    printf("%d",Calculate_power(base,power,1));
    return 0;
}
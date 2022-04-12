#include <stdio.h>
//write a program to calculate simple intrest
int main(){
    float rate, principal, time;
    printf("enter rate, principal, time respectively:\n");
    scanf("%f%f%f", &rate,&principal,&time);
    float simple_interest = principal*(1 + rate* time);
    printf("SI will be %f", simple_interest);
    return 0;
}
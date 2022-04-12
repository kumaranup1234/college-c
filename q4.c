#include <stdio.h>
//program to check whether a number is positive or negative
int main(){
    int n;
    printf("enter a number: \n");
    scanf("%d", &n);
    if(n >= 0){
        printf("%d is positive", n);
    }else{
        printf("%d is negative", n);
    }

    return 0;
}
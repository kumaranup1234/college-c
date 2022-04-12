#include <stdio.h>
//program to add two numbers
int main(){
    int a,b,sum = 0;
    printf("enter two numbers :\n");
    scanf("%d%d", &a,&b);
    sum = a + b;
    printf("Sum of %d and %d is %d", a, b, sum);
    return 0;
}
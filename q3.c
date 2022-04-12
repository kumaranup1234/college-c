#include <stdio.h>
//write a program to get sum of square of n natural numbers
int main(){
    int n;
    int square = 1;
    int sum = 0;
    printf("enter the number upto which you want sum:\n");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        square = i * i;
        sum = sum + square;
    }
    printf("sum of square of n number is : %d\n", sum);
    return 0;
}
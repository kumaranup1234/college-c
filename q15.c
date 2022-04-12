#include <stdio.h>
//program to get sum of n natural numbers
int main(){
    int n,sum = 0;
    printf("enter a number upto which you have to find sum \n");
    scanf("%d",& n);
    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    printf("Sum is %d", sum);

}
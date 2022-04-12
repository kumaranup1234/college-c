#include <stdio.h>
//program to find factorial of a number
int main(){
    int n, product = 1;
    printf("Enter the number to find factorial\n");
    scanf("%d", & n);
    for(int i = 1; i <= n; i++){
        product = product * i;
    }
    printf("Factorial of %d is %d :", n, product);
    return 0;
}
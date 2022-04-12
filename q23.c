#include <stdio.h>
//program to find factorial using recursion
long int multi(int n);
int main(){
    int n;
    printf("Enter a number of your choice: \n");
    scanf("%d", &n);
    printf("Factorial of the number %d is %d", n, multi(n));
    return 0;

}
long int multi(int n){
    if(n >= 1){
        return n * multi(n - 1);
    }else{
        return 1;
    }
}
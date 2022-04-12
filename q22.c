#include <stdio.h>
//program to swap two numbers
int main(){
    int a, b, temp;
   
    printf("Enter two number of yout choice: \n");
    scanf("%d%d", &a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("%d  %d", a, b);
}
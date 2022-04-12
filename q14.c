#include <stdio.h>
// program to find the entered number is prime or not
int main(){
    int n, flag;
    printf("Enter a number: \n");
    scanf("%d", & n);
    for(int i = 2; i <= n/2; i++){
        if(n / i == 0){
            flag++;
            break;
        }
    }
    if(flag == 0){
        printf("Entered %d number is prime.", n);
    }else{
        printf("Entered %d number is not prime.", n);
    }
    

}
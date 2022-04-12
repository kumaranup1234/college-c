#include <stdio.h>
int main(){
    int n;
    printf("Enter any number excluding 0: \n");
    scanf("%d", &n);
    if(n > 0){
        printf("Entered number is natural number - %d ", n);

    }else{
        printf("Entered number is not a natural number - %d ", n);
    }
    return 0;
}
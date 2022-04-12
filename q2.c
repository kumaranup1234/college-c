#include <stdio.h>
//program to print table from 1 to 10
int main(){
    int n;
    int product = 1;
    printf("Enter the number of which you want to print the table:\n");
    scanf("%d", &n);
    for(int i = 1; i <= 10; i++){
        product = n * i;
        printf("%d * %d = %d\n", n , i, product);
    }
    
    return 0;
}
#include <stdio.h>
//sum of square divided by factorial 
int main(){
    int n;
    int product = 1;
    float result = 0;
   
    printf("Enter a number :\n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        product = product * i;
        result = result + (i * i* 0.1*10)/ product;
    }
    printf("Result is %f", result);
    return 0;

}
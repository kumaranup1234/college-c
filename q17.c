#include <stdio.h>
//average of three numbers
int main(){
    int a,b,c,average = 0;
    printf("Enter three numbers: \n");
    scanf("%d%d%d", &a,&b,&c);
    average = (a + b + c) / 3;
    printf("Average of %d , %d and %d is %d", a, b, c, average);
    return 0;
}
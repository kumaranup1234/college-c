#include <stdio.h>
// program to check maximjum between three numbers
int main(){
    int a,b,c;
    printf("enter three numbers : \n");
        scanf("%d%d%d" , &a,&b,&c);
        if (a > b && a > c)
        {
            printf("%d is greater", a);
        }
        else if (b > c && b > a)
        {
            printf("%d is greater", b);
        }
        else
        {
            printf("%d is greater", c);
        }
       return 0;
}
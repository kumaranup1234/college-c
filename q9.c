#include <stdio.h>
//calculator using switch case
int main(){
    char character;
    int a,b;
    printf("Enter a opreator(+-*/)\n");
    scanf("%s", &character);
    printf("Enter two numbers :\n");
    scanf("%d%d", &a, &b);

    switch (character)
    {
    case '+':       
        printf("sum is %d + %d = %d", a, b, a+b); 
        break;
    case '-':       
        printf("difference is %d - %d = %d", a, b, a-b);
        break;
    case '*':      
        printf("multiplication is %d * %d = %d", a, b, a*b);
        break;
    case '/': 
        printf("division is %d / %d = %d", a, b, a/b);
        break;
    }
    return 0;
}
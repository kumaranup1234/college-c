#include <stdio.h>
//print week days using switch case
int main(){
    char n;
    printf("Enter a number(1-7--m,t)\n");
    scanf("%s", &n);
    switch (n)
    {
    case '1':
    printf("Monday");
        break;
    case '2':
        printf("Tuesday");
        break;
    case '3':
        printf("Wedenesday"); 
        break;
    case '4':
        printf("Thrusday"); 
        break;
    case '5':
        printf("Friday");
        break;
    case '6':
        printf("Saturday"); 
        break;
    case '7':
        printf("SUNDAY");
        break;
    default:
        printf("Incorrect input");
        break;
    }
    return 0;
}
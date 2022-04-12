#include <stdio.h>
// program to print given tempreature in fahrenheit scale
int main(){
    float temp;
    printf("enter the tempreature in celcius: \n");
    scanf("%f", &temp);
    float conversion = (temp * 9 / 5) + 32;
    printf("temp. in fahrenheit is: %f", conversion);

    return 0;
}
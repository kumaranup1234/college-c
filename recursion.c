#include <stdio.h>

void calculatePrice(float);

int main(){
   float value = 100.00;
   calculatePrice(value);
   printf("original value is : %f\n", value);
   return 0;
}
void calculatePrice(float value){
    value = value + (0.18 * value);
    printf("final price is : %f\n", value);
}
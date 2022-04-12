#include <stdio.h>
//swap numers using pointer
int main(){
    int a, b, temp, *ptr_a, *ptr_b;
    printf("enter the value of a and b \n");
    scanf("%d%d", &a,&b);
    printf("Value of a and b before swapping is a = %d , b = %d\n", a, b);

    ptr_a = &a;
    ptr_b = &b;

    temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

   printf("Values of a and b after swapping is a = %d, b = %d ", *ptr_a, *ptr_b);

}
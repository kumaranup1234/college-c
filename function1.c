
#include <stdio.h>

void areaSquare(float);
void areaCircle(float, float);
void areaRectangle(float, float);


int main(){
    float side = 4;
    float pi = 3.14;
    float radius = 5;
    float length = 10;
    float breadth = 8;
areaSquare(side);
areaCircle(radius, pi);
areaRectangle(length, breadth);

}
void areaSquare(float side){
    printf("area is : %f\n", side * side);
}
void areaCircle(float radius , float pi){
    printf("area is : %f\n" , radius * radius * pi); 
}
void areaRectangle(float length, float breadth){
    printf("area is : %f\n" , length * breadth);
}
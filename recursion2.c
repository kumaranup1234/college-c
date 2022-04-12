#include <stdio.h>
void printH(int count);
int main(){
    printH(5);
    return 0;

}
void printH(int count){

    if(count == 0){
        return;
    }
    printf("hello world\n");
    printH(count-1);
}
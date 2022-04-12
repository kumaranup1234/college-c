#include <stdio.h>
//computer pyramid structure
int main(){
    char yasha[9] = {'C','O','M','P','U','T','E','R'};
    for(int i = 0; i <= 7; i++){
        for(int j = 0; j <= i; j++){
            printf("%c ", yasha[j]);
        }
        printf("\n");
        
    }

}
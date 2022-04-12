#include <stdio.h>
// program to print pattern
//1
//1 2
//1 2 3
int main(){
    int rows;
    printf("enter number of rows:");
    scanf("%d",& rows);
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            printf("%d%s", j," ");
        }
        printf("\n");
    }
    return 0;

}
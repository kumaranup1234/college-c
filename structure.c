#include <stdio.h>
#include <string.h>

struct student
{
    char name[35];
    int roll;
    char prog[40];
    int sem;
} anup;

int main(){

    strcpy(anup.name, "anupkumar");
    anup.roll = 20;
    strcpy(anup.prog, "b.tech");
    anup.sem = 1;
    printf("your name is : %s\n", anup.name);
    printf("your roll  is %d\n", anup.roll);
    printf("your programe is %s\n", anup.prog);
    printf("your sem is: %d\n" , anup.sem);
    return 0;
    
}

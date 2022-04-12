#include <stdio.h>
#include <string.h>
struct student{
    char name[40];
    int sem;
    int roll_no;
    char course[20];
}student1;

int main(){
    strcpy(student1.name, "Anup Kumar");
    student1.sem = 45;
    student1.roll_no = 45;
    strcpy(student1.course, "B.Tech");

    printf("Name is %s\n", student1.name);
    printf("Sem is %d\n", student1.sem);
    printf("Roll_No is %d\n", student1.roll_no);
    printf("Course is %s", student1.course);
}
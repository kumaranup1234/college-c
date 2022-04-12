#include<stdio.h>
int main ()
{
    int a,b,c, sum;
    float d;

    printf ("\n please enter 3 numbers ");
    scanf (" %d %d %d", &a, &b, &c);

    sum= a+b+c;
    d=(a+b+c)/3;
    printf ("\n sum is %d", sum);
    printf ("\n average is %d", sum);
    return 0;
}
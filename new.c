#include <stdio.h>
void main(){
  int sum = 0;
  for(int i = 50; i >= 5; i--){
      sum = i + sum;
  }
  printf("%d", sum);
  }
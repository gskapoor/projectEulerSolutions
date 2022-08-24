#include <stdio.h>

int main(){
  int smol = 1;
  int big = 2;

  int sum = 2;

  for (int i = 3; big < 4000000; i++){
    int new = big + smol;
    smol = big;
    big = new;
    sum += (big % 2 == 0) * big;
  }
  
  printf("%d", sum);
}

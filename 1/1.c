#include <stdio.h>


int main(){
  int sum = 0;
  for (int i = 0 ; i < 1000 ; i++){
    sum += i * !(i % 5 && i % 3);
  }

  printf("%d", sum);

  return 0;
}

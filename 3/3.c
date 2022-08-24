#include <stdio.h>

int main(){
  const long long TOFACTOR = 600851475143;
  long long max = 0;
  for(long long i = 0; i * i < TOFACTOR; i++){
    TOFACTOR % i == 0 ? max = i: 0;
  }

  printf("%ld", max);

  return 0;
}

#include <iostream>


int main(){
  int retval = 0;
  for (unsigned int i = 1; i <= (1U << 30); i++){
    if (((i) ^ (2 * i) ^ (3 * i)) == 0){
      retval++;
    }
  }

  std::cout << retval << std::endl;
  return 0;
}

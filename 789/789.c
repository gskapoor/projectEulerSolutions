#include <stdio.h>
#include <stdbool.h>





int main()
{
    const long long max = 2000000000011;
    for (size_t i = 2; i < max; i++){
        for (size_t j = 2; j < max; j++){
            if (j != i){
                for (size_t k = 2; k < max; k++){
                    if (k != i && k != j){
                        if ((i) % max == (k * j) % max){
                            printf("%lld", (i % max));
                        }
                    }
                }
            }
        }
    }
    

    return 0;
}


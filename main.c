#include <stdio.h>
#include <stdlib.h>

#include "matrix.h"

int main() {
    int sasiad [3][3] ={0};
    int macierz[3][3] = {
    {1,0,1},
    {1,0,0},
    {1,0,0},
    };

    for(int i = 1; i <= 3; i++){
        printf("%d. iteracja\n", i);
        wypiszmacierz(macierz);
        checksasiad(macierz, sasiad);
        zmienstan(macierz, sasiad);
        zerujmacierz(sasiad);

    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "matrix.h"

int main() {

    int rows = 3;
    int colm = 3;
    int iteration = 4;

    int sasiad  [rows][colm];
    zerujmacierz(sasiad);
    int macierz [rows][colm];

        for(int r = 0; r < rows; r++){
                for(int c = 0; c < colm; c++)
                        macierz[r][c] = 1;
                }


    for(int i = 1; i <= iteration; i++){
        printf("%d. iteracja\n", i);
        wypiszmacierz(macierz);
        checksasiad(macierz, sasiad);
        zmienstan(macierz, sasiad);
        zerujmacierz(sasiad);

    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>


#include "matrix.h"

int main() {

    int rows = 5;
    int colm = 5;
    int iteration = 3;

    int sasiad  [rows][colm];
    zerujmacierz(rows, colm, sasiad);
    int macierz [rows][colm];

        for(int r = 0; r < rows; r++){
                for(int c = 0; c < colm; c++)
                        macierz[r][c] = 1;
                }


    for(int i = 1; i <= iteration; i++){
        printf("%d. iteracja\n", i);
        wypiszmacierz(rows, colm, macierz);
        checksasiad(rows, colm, macierz, sasiad);
        zmienstan(rows, colm, macierz, sasiad);
        zerujmacierz(rows, colm, sasiad);

    }
    return 0;
}


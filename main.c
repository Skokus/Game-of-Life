#include <stdio.h>
#include <stdlib.h>


#include "matrix.h"
#include "file.h"


int main(int argc, char** argv) {
    int rows = 0;
    int colm = 0;
    int colmmax = 0;
    int iteration = 5;

    FILE *fp = fopen(argv[1], "r");
    zwymiarujmacierz(&rows, &colm, &colmmax, fp);
    fclose(fp);

    int sasiad  [rows][colm];
    int macierz [rows][colm];

    FILE *file = fopen(argv[1], "r");
    wczytajmacierz(rows, colm, macierz, file);
    fclose(file);


    printf("Rows = %d, Colm = %d\n\n", rows, colm);
    for(int i = 1; i <= iteration; i++){
        printf("%d. iteracja\n", i);
        zerujmacierz(rows, colm, sasiad);
        wypiszmacierz(rows, colm, macierz);
        checksasiad(rows, colm, macierz, sasiad);
        zmienstan(rows, colm, macierz, sasiad);
    }
    return 0;
}

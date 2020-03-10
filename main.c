#include <stdio.h>
#include <stdlib.h>


#include "matrix.h"
#include "file.h"
#include "pbm.h"

int main(int argc, char** argv) {
    int rows = 0;
    int colm = 0;
    int colmmax = 0;
    int iteration = 3;

    FILE *fp = fopen(argv[1], "r");
    zwymiarujmacierz(&rows, &colm, &colmmax, fp);
    fclose(fp);

    int** sasiad  = zrobmacierz(rows, colm);
    int** macierz = zrobmacierz(rows, colm);

    FILE *file = fopen(argv[1], "r");
    wczytajmacierz(rows, colm, macierz, file);
    fclose(file);


    printf("Rows = %d, Colm = %d\n\n", rows, colm);
    for(int i = 1; i < iteration; i++){
        printf("%d. iteracja\n", i);
        zerujmacierz(rows, colm, sasiad);
        wypiszmacierz(rows, colm, macierz);
        zrobObraz(rows, colm, macierz, i);
        checksasiad(rows, colm, macierz, sasiad);
        zmienstan(rows, colm, macierz, sasiad);
    }
    printf("%d. iteracja\n", iteration); // pętla zapisywała iteration + 1 iterację, żeby utworzyć plik trzeba zrobić to oddzielnie.
    zrobObraz(rows, colm, macierz, iteration);
    wypiszmacierz(rows, colm, macierz);
    zapiszmacierz(rows, colm, macierz, "test2");

    return 0;
}

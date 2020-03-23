#include <stdio.h>
#include <stdlib.h>


#include "matrix.h"
#include "file.h"
#include "pbm.h"

int main(int argc, char** argv) {
    int rows = 0;
    int colm = 0;
    int colmmax = 0;
    int iteration = atoi(argv[1]);
    FILE *fp = fopen(argv[2], "r");
    zwymiarujmacierz(&rows, &colm, &colmmax, fp);
    fclose(fp);

    int** sasiad  = zrobmacierz(rows, colm);
    int** macierz = zrobmacierz(rows, colm);

    FILE *file = fopen(argv[2], "r");
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
    printf("%d. iteracja\n", iteration);    // pêtla zapisywa³a iteration + 1 iteracjê, ¿eby utworzyæ plik trzeba zrobiæ to oddzielnie.
    wypiszmacierz(rows, colm, macierz);
    zapiszmacierz(rows, colm, macierz, argv[3]);

    return 0;
}

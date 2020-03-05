#include <stdio.h>
#include <stdlib.h>


#include "matrix.h"

int main(int argc, char** argv) {
    int c;
    int rows = 0;
    int colm = 0;
    int colmmax = 0;
    int iteration = 3;
    FILE *fp = fopen(argv[1], "r");
    while((c = fgetc(fp)) != EOF){
        if (c == '\n'){
            rows++;
            colm = 0;
        }
        else if (c == '1'){
            colm++;
            if(colm > colmmax)
                colmmax = colm;
        }
        else if (c == '0'){
            colm++;
            if(colm > colmmax)
                colmmax = colm;
        }
    }
    fclose(fp);

    colm = colmmax;
    int sasiad  [rows][colm];
    int macierz [rows][colm];
    zerujmacierz(rows, colm, macierz);

    rows = 0;
    colm = 0;
    FILE *file = fopen(argv[1], "r");
    while((c = fgetc(file)) != EOF){
        if (c == '\n'){
            rows++;
            colm = 0;
        }
        else if (c == '1'){
            macierz[rows][colm] = 1;
            colm++;
        }
        else if (c == '0'){
            macierz[rows][colm] = 0;
            colm++;
        }
    }
    fclose(fp);

    colm = colmmax;
    zerujmacierz(rows, colm, sasiad);
    printf("Rows = %d, Colm = %d\n\n", rows, colm);
    for(int i = 1; i <= iteration; i++){
        printf("%d. iteracja\n", i);
        wypiszmacierz(rows, colm, macierz);
        checksasiad(rows, colm, macierz, sasiad);
        zmienstan(rows, colm, macierz, sasiad);
        zerujmacierz(rows, colm, sasiad);

    }
    return 0;
}

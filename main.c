#include <stdio.h>
#include <stdlib.h>


#include "matrix.h"
#include "file.h"
#include "pbm.h"

int main(int argc, char** argv) {
    if(argc != 4){
        printf("Podano zla liczbe argumentow\n");
        printf("Prosze podac:\nArgument 1 - liczbe iteracji\nArgument 2 - plik wejsciowy\nArgument 3 - plik wyjsciowy\n");
        return 1;
    }
    else if (atoi(argv[1]) == 0){
        printf("Jako liczbe iteracji nie podano liczby badz podano 0.\nProsze o wpisanie liczby dodatniej.");
        return 2;
    }

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

    printf("Wczytywany plik ma nazwe: %s\n", argv[2]);
    printf("Liczba wierszy wynosi %d.\nLiczba kolumn wychodzi %d.\n\n", rows, colm);
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
    zrobObraz(rows, colm, macierz, iteration);

    printf("\nUtworzono %d plikow o nazwie NR_ITERACJI.pbm\n", iteration);
    printf("\nOstatnia macierz zapisano do pliku o nazwie: %s\n", argv[3]);
    free(*sasiad);
    free(*macierz);

    return 0;
}

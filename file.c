#include "file.h"

#include <stdio.h>
#include <stdlib.h>


void zwymiarujmacierz(int *rows, int *colm, int *colmmax, FILE *fp){
    int c;
    while((c = fgetc(fp)) != EOF){
        if (c == '\n'){
            (*rows)++;
            *colm = 0;
        }
        else if (c == '1'){
            (*colm)++;
            if(*colm > *colmmax)
                *colmmax = *colm;
        }
        else if (c == '0'){
            (*colm)++;
            if(*colm > *colmmax)
                *colmmax = *colm;
        }
    }
    *colm = *colmmax;
}

void wczytajmacierz(int rows, int colm, int macierz[rows][colm], FILE *file){
    rows = 0;
    colm = 0;
    int c;
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
}

void zapiszmacierz(int rows, int colm, int macierz[rows][colm], char* nazwa){
    FILE* zapis;
    int tmp;
    char str[30];
    sprintf(str, "%s.txt", nazwa);
    zapis = fopen(str, "w");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < colm; j++) {
            tmp = macierz[i][j];
            fprintf(zapis, "%d ", tmp);
        }
        fprintf(zapis, "\n");
    }
    fclose(zapis);
}

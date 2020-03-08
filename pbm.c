#include <stdio.h>
#include <stdlib.h>

void zrobObraz(int rows, int colm, int macierz[rows][colm], int numer){
    FILE* obraz;
    int tmp;
    char str[10];
    sprintf(str, "%d.txt", numer);
    obraz = fopen(str, "w");
    fprintf(obraz, "P1\n");
    fprintf(obraz, "%d %d", colm, rows);
    for (i = 0; i < rows; i++) {
        fprintf(obraz, "\n");
        for (j = 0; j < colm; j++) {
            tmp = macierz[i][j];
            fprintf(obraz, "%d ", tmp);
        }
    }
    fclose(obraz);
}

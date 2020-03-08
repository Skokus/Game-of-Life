#include "matrix.h"

#include <stdio.h>
#include <stdlib.h>

void checksasiad(int rows, int colm, int macierz[rows][colm], int sasiad[rows][colm]){
    for(int r = 0; r < rows; r++){
        for(int c = 0; c < colm; c++){
            if(r-1 >=0){
                if(c-1 >= 0)
                    if(macierz[r-1][c-1] == 1)
                        sasiad[r][c]++;

                if(macierz[r-1][c] == 1)
                    sasiad[r][c]++;

                if(c+1 < colm)
                    if(macierz[r-1][c+1] == 1)
                        sasiad[r][c]++;
            }

                if(c-1 >= 0)
                    if(macierz[r][c-1] == 1)
                        sasiad[r][c]++;

                if(c+1 < colm)
                    if(macierz[r][c+1] == 1)
                        sasiad[r][c]++;
            if(r+1 < rows){
                if(c-1 >= 0)
                    if(macierz[r+1][c-1] == 1)
                        sasiad[r][c]++;

                    if(macierz[r+1][c] == 1)
                        sasiad[r][c]++;

                if(c+1 < colm)
                    if(macierz[r+1][c+1] == 1)
                        sasiad[r][c]++;
            }
        }
    }
}

void zmienstan(int rows, int colm, int macierz[rows][colm], int sasiad[rows][colm]){
    for(int r = 0; r < rows; r++){
        for(int c = 0; c < colm; c++){
            if(macierz[r][c] == 1){
                if(sasiad[r][c] == 3 || sasiad[r][c] == 2)
                    macierz[r][c] = 1;
                else
                    macierz[r][c] = 0;
            }
            else {
                if(sasiad[r][c] == 3)
                    macierz[r][c] = 1;
                else
                    macierz[r][c] = 0;
            }

        }
    }
}

void zerujmacierz(int rows, int colm, int sasiad[rows][colm]){
    for(int r = 0; r < rows; r++){
            for(int c = 0; c < colm; c++)
                sasiad[r][c] = 0;
        }
}

void wypiszmacierz(int rows, int colm, int macierz[rows][colm]){
    for(int r = 0; r < rows; r++){
        for(int c = 0; c < colm; c++)
            printf("%d ", macierz[r][c]);
    printf("\n");
    }
}

int** zrobmacierz (int rows, int colm){
    int** macierz;
    macierz = malloc(sizeof(int*)*rows);
    for(int i=0; i<rows; i++)
        macierz[i] = malloc(sizeof(int)*colm);
    for(int i=0; i<rows; i++){
        for(int j=0; j<colm; j++)
            macierz[i][j]=0;
    }
    return macierz;
}

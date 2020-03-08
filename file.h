#ifndef FILE_H_
#define FILE_H_

#include <stdio.h>

void zwymiarujmacierz(int *rows, int *colm, int *colmmax, FILE *fp);
//zmienna colmmax przechowuje informacje o liczbie kolumn; zwiększa się, gdy w wierszu znajdzie więcej komórek niż poprzednio
void wczytajmacierz(int rows, int colm, int macierz[rows][colm], FILE *file);

void zapiszmacierz(int rows, int colm, int macierz[rows][colm], char* nazwa);

#endif FILE_H_

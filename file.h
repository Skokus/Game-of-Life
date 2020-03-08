#ifndef FILE_H_
#define FILE_H_

#include <stdio.h>

void zwymiarujmacierz(int *rows, int *colm, int *colmmax, FILE *fp);

void wczytajmacierz(int rows, int colm, int macierz[rows][colm], FILE *file);

void zapiszmacierz(int rows, int colm, int macierz[rows][colm], FILE *file, char* nazwa)

#endif FILE_H_

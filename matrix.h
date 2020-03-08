#ifndef MATRIX_H_
#define MATRIX_H_
// zmienna macierz to macierz, w której zapisywane są stany poszczególnych komórek
// zmienna sasiad to macierz, w której zapisywana jest informacja ile "1" sasiaduje z daną komórką
void checksasiad(int rows, int colm, int macierz[rows][colm], int sasiad[rows][colm]);

void zmienstan(int rows, int colm, int macierz[rows][colm], int sasiad[rows][colm]);

void zerujmacierz(int rows, int colm, int sasiad[rows][colm]);

void wypiszmacierz(int rows, int colm, int macierz[rows][colm]);

int** zrobmacierz (int rows, int colm);

#endif MATRIX_H_

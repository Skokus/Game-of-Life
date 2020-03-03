# JIMP2
Projekt z C

Branche:

  master - gotowe pliki

  WIP - w trakcie tworzenia, niedokończony kod

  Testy - testowanie różnych mechanik, sprawdzenie czy coś działa (np. sprawdzenie mechaniki porównywania 2 wartości)


Pliki w projekcie:
  
  main.c - plik główny, łączący cały projekt w całość.
  
  matrix.h - działania na macierzy.
      
        Funkcje matrix.h:
        
            void checksasiad(int macierz[rows][colm], int sasiad[rows][colm]) - sprawdza pokolei dla każdej komórki macierz[][] komórki sąsiednie, wynik zapisuje w macierzy sasiad[][].
            
            void zmienstan(int macierz[rows][colm], int sasiad[rows][colm]) - zmienia wartosci macierz[][] bazujac na wartosciach sasiad[][].
            
            void zerujmacierz(int sasiad[rows][colm]) - zeruje wszystkie wartosci sasiad[][] przed kolejna iteracją.
            
            void wypiszmacierz(int macierz[rows][colm]) - wypisuje macierz.

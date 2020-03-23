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
        
            void checksasiad(int rows, int colm, int macierz[rows][colm], int sasiad[rows][colm]) - sprawdza pokolei dla każdej komórki macierz[][] komórki sąsiednie, wynik zapisuje w macierzy sasiad[][].
            
            void zmienstan(int rows, int colm, int macierz[rows][colm], int sasiad[rows][colm]) - zmienia wartosci macierz[][] bazujac na wartosciach sasiad[][].
            
            void zerujmacierz(int rows, int colm, int sasiad[rows][colm]) - zeruje wszystkie wartosci sasiad[][] przed kolejna iteracją.
            
            void wypiszmacierz(int rows, int colm, int macierz[rows][colm]) - wypisuje macierz.
  file.h - operacje na plikach
        
          Funkcje file.h
            void zwymiarujmacierz(int *rows, int *colm, int *colmmax, FILE *fp); - sprawdza ile kolumn oraz wierszy ma macierz zawarta w pliku
            
            void wczytajmacierz(int rows, int colm, int macierz[rows][colm], FILE *file); - wczytuje plik do macierzy macierz[][]
            
            void zapiszmacierz(int rows, int colm, int macierz[rows][colm], char* nazwa); - funckja zapisuje macierz[][] do pliku nazwa
            
            
  pbm.h - tworzenie pliku o formacie PBM (graficznym)
          
          Funkcje pbm.h
             void zrobObraz(int rows, int colm, int macierz[rows][colm], int numer); - tworzy plik o formacie PBM (graficznym) o nazwie numer.pbm
             
             
Format plików
Przykładowy format pliku znajdziemy w test1.txt oraz szybowiec.txt
Są to pliki tekstowe, które zawierają oddzielone spacją oraz znakami nowej linii 0 i 1, gdzie 0 to komórka pusta (martwa), a 1 to komórka żywa. Uwaga! Nie należy zostawiać na końcu znaku nowej linii, prowadzi to do złego wczytania pliku.
            

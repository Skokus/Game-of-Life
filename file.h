#ifndef FILE_H_
#define FILE_H_


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
#endif FILE_H_

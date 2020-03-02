#ifndef MATRIX_H_
#define MATRIX_H_

void checksasiad(int macierz[3][3], int sasiad[3][3]){
    for(int r = 0; r < 3; r++){
        for(int c = 0; c < 3; c++){
            if(r-1 >=0){
                if(c-1 >= 0)
                    if(macierz[r-1][c-1] == 1)
                        sasiad[r][c]++;

                if(macierz[r-1][c] == 1)
                    sasiad[r][c]++;

                if(c+1 < 3)
                    if(macierz[r-1][c+1] == 1)
                        sasiad[r][c]++;
            }

                if(c-1 >= 0)
                    if(macierz[r][c-1] == 1)
                        sasiad[r][c]++;

                if(c+1 < 3)
                    if(macierz[r][c+1] == 1)
                        sasiad[r][c]++;
            if(r+1 < 3){
                if(c-1 >= 0)
                    if(macierz[r+1][c-1] == 1)
                        sasiad[r][c]++;

                    if(macierz[r+1][c] == 1)
                        sasiad[r][c]++;

                if(c+1 < 3)
                    if(macierz[r+1][c+1] == 1)
                        sasiad[r][c]++;
            }
        }
    }
}

void zmienstan(int macierz[3][3], int sasiad[3][3]){
    for(int r = 0; r < 3; r++){
        for(int c = 0; c < 3; c++){
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
    return macierz;
}

void zerujmacierz(int sasiad[3][3]){
    for(int r = 0; r < 3; r++){
            for(int c = 0; c < 3; c++)
                sasiad[r][c] = 0;
        }
}

void wypiszmacierz(int macierz[3][3]){
    for(int r = 0; r < 3; r++){
        for(int c = 0; c < 3; c++)
            printf("%d ", macierz[r][c]);
    printf("\n");
    }
}


#endif MATRIX_H_

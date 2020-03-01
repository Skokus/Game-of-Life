#ifndef MATRIX_H_
#define MATRIX_H_

void checksasiad(int macierz[3][3], int sasiad[3][3]){
    for(int r = 0; r < 3; r++){
        for(int c = 0; c < 3; c++){
            if(r-1 >= 0 && c-1 >= 0)
                if(macierz[r-1][c-1] == 1)
                    sasiad[r][c]++;
            if(r-1 >= 0 && c >= 0)
                if(macierz[r-1][c] == 1)
                    sasiad[r][c]++;
            if(r-1 >= 0 && c+1 >= 0)
                if(macierz[r-1][c+1] == 1)
                    sasiad[r][c]++;
            if(r >= 0 && c-1 >= 0)
                if(macierz[r][c-1] == 1)
                    sasiad[r][c]++;
            if(r >= 0 && c+1 >= 0)
                if(macierz[r][c+1] == 1)
                    sasiad[r][c]++;
            if(r+1 >= 0 && c-1 >= 0)
                if(macierz[r+1][c-1] == 1)
                    sasiad[r][c]++;
            if(r+1 >= 0 && c >= 0)
                if(macierz[r+1][c] == 1)
                    sasiad[r][c]++;
            if(r+1 >= 0 && c+1 >= 0)
                if(macierz[r+1][c+1] == 1)
                    sasiad[r][c]++;
        }
    }
}

#endif MATRIX_H_

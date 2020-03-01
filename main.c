#include <stdio.h>
#include <stdlib.h>

#include "matrix.h"

int main()
{
    int sasiad [3][3] ={0};
    int macierz[3][3] = {
    {1,1,1},
    {0,0,0},
    {0,0,0},
    };

    printf("Macierz:\n");
    for(int r = 0; r < 3; r++){
        for(int c = 0; c < 3; c++)
            printf("%d ", macierz[r][c]);
        printf("\n");
    }

    printf("Pierwsza iteracja:\n");
    for(int r = 0; r < 3; r++){
        for(int c = 0; c < 3; c++)
            printf("%d ", sasiad[r][c]);

    printf("\n");
    }
    checksasiad(macierz, sasiad);
    printf("Druga iteracja:\n");
    for(int r = 0; r < 3; r++){
        for(int c = 0; c < 3; c++)
            printf("%d ", sasiad[r][c]);

    printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int macierz[3][3] = {
    {1,0,0},
    {1,1,0},
    {0,1,0},
    };
    for(int r = 0; r < 3; r++){
        for(int c = 0; c<3; c++)
            printf("%d ", macierz[r][c]);

    printf("\n");
    }
    return 0;
}

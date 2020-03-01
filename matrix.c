#include <stdio.h>
#include <stdlib.h>

int main()
{
    int macierz[2][2] = {
    {1,2},
    {3,4},
    };
    for(int r = 0; r < 2; r++){
        for(int c = 0; c<2; c++)
            printf("%d ", macierz[r][c]);

    printf("\n");
    }
    return 0;
}

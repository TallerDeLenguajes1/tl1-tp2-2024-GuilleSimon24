#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 7

int main(){

    int i,j;
    int mt[N][M];

    int *punt;
    punt = &mt[0][0];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            *punt = 1+rand()%100;
            printf("%.2lf ", (double)*punt);
            punt++;
        }
        printf("\n");
    }
    punt = &mt[0][0];

    




    return 0;
}
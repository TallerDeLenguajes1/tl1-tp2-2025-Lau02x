#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20
int main() {
    srand(time(NULL));
    int i;
    double vt[N];
    double *puntero;
    puntero = vt;
    for(i = 0;i<N; i++)
    {
        puntero[i]=1+rand()%100;
        printf( "%f ", puntero[i]);
    }
    return 0;
}
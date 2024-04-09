#include <stdio.h>
#include <time.h>
#define N 20

int main()
{
    double vt[N];
    int i;
    double *punt = vt;
    srand(time(NULL));

    for (i = 0; i < N; i++)
    {
        vt[i] = 1 + rand() % 100;
        printf("%.2f ", punt[i]);
    }
}
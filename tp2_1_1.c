#include <stdio.h>
#include <time.h>
#define N 20
double vt[N];

int main()
{
    int i;
    srand(time(NULL));

    for (i = 0; i < N; i++)
    {
        vt[i] = 1 + rand() % 100;
        printf("%.2f ", vt[i]);
    }
}

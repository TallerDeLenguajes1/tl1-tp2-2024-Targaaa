#include <stdio.h>
#include <time.h>
#define N 5
#define M 7

int main()
{
    srand(time(NULL));
    int i, j;
    int mt[N][M];
    int *p = &mt[0][0];

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            *(p + i * M + j) = 1 + rand() % 100;
            printf("%d ", *(p + i * M + j));
        }
        printf("\n");
    }
}
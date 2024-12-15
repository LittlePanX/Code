#include <stdio.h>
int main(void)
{
    int M, N, P;
    scanf("%d %d %d", &M, &N, &P);
    int arrA[M][N];
    int arrB[N][P];
    int arrC[M][P];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arrA[i][j]);
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++)
        {
            scanf("%d", &arrB[i][j]);
        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < P; j++)
        {
            arrC[i][j] = 0;
            for (int k = 0; k < N; k++)
            {
                arrC[i][j] += arrA[i][k] * arrB[k][j];
            }
        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < P; j++)
        {
            printf("%d", arrC[i][j]);
            if (j < P - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
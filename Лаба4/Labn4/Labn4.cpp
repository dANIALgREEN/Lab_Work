#include <stdio.h>

int main()
{
    const int N = 3, M = 4; //Ввод переменных
    int mat[N][M];
    int i, j, buff, max, imax;
    
    printf_s("Input %d numbers\n", N * M); // Ввод/вывод стартовой матрицы
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf_s("%d", &mat[i][j]);
            printf_s("%d ", mat[i][j]);
        }
        printf_s("\n");
    }

    max = mat[0][0];
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++)
        {
            if (mat[i][j] > max)
            {
                max = mat[i][j];
                imax = i;
            }
        }
    }
    
        for (j = 0; j < M; j++) {
            buff = mat[0][j];
            mat[0][j] = mat[imax][j];
            mat[imax][j] = buff;
        }
        printf_s("\n");
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                printf_s("%d ", mat[i][j]);
            }
            printf_s("\n");
        }
    
    return 0;
}

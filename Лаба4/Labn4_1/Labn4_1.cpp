#include <stdio.h>

int main()
{
    const int N = 3, M = 4; //Ввод переменных
    int mat1[N][M];
    int mat2[N][M];
    int i, j, ss1=0, ss2=0, ss3=0, smin=0, smax=0, st1=0, st2=0, st3=0, st4=0, tmin=0, tmax=0;

    printf_s("Input %d numbers\n", N * M); // Ввод/вывод стартовой матрицы
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf_s("%d", &mat1[i][j]);
            printf_s("%d", mat1[i][j]);
        }
        printf_s("\n");
    }
    printf_s("Input %d numbers\n", N * M); // Ввод/вывод стартовой матрицы
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf_s("%d", &mat2[i][j]);
            printf_s("%d", mat2[i][j]);
        }
        printf_s("\n");
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < M; j++) {
            
            ss1 += mat1[i][j];
            
        }
    }
    for (i = 1; i < 2; i++)
    {
        for (j = 0; j < M; j++) {

            ss2 += mat1[i][j];

        }
    }
    for (i = 2; i < 3; i++)
    {
        for (j = 0; j < M; j++) {

            ss3 += mat1[i][j];

        }
    }
    smin = ss1;
    smax = ss2;
    if (ss2 < smin) {
        smin = ss2; 
    }
    else if (ss2 > smin) {
        smax = ss2;
    }
    if (ss3 < smin) {
        smin = ss3;
    }
    else if (ss3 > smin) {
        smax = ss3;
    }
    else if (ss1 == ss2 && ss2 == ss3) {
        tmin = ss1;
    }

    for (j = 0; j < 1; j++)
    {
        for (i = 0; i < N; i++) {

            st1 += mat2[i][j];

        }
    }
    for (j = 1; j < 2; j++)
    {
        for (i = 0; i < N; i++) {

            st2 += mat2[i][j];

        }
    }
    for (j = 2; j < 3; j++)
    {
        for (i = 0; i < N; i++) {

            st3 += mat2[i][j];

        }
    }
    for (j = 3; j < 4; j++)
    {
        for (i = 0; i < N; i++) {

            st4 += mat2[i][j];

        }
    }
    tmin = st1;
    tmax = st2;
    if (st2 < tmin) {
        tmin = st2;
    }
    else if (st2 > tmin) {
        tmax = st2;
    }
    if (st3 < tmin) {
        tmin = st3;
    }
    else if (st3 > tmin) {
        tmax = st3;
    }
    if (st4 < tmin) {
        tmin = st4;
    }
    else if (st4 > tmin) {
        tmax = st4;
    }
    else if (st1 == st2 && st2 == st3 && st3 == st4) {
        tmax = st1;
    }
    printf_s("\nMultiply =%d", smin*tmax);

    return 0;
}

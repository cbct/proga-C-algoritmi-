#include <stdio.h>
#include <stdlib.h>

void F_mult(int line_A, int stolb_A, int line_B, int stolb_B, double **matrix_A, double **matrix_B, double **matrix_C){

    if(stolb_A != line_B){
        printf("Matricy A nevozmojno umnozit s matricei B\n");
        return;
    }

    printf("A * B = C\n");
    for (int i = 0; i < line_A; i++) {
        for (int j = 0; j < stolb_B; j++) {
            matrix_C[i][j] = 0;
            for (int k = 0; k < stolb_A; k++) {
                matrix_C[i][j] += matrix_A[i][k] * matrix_B[k][j];        //вычисление квадрата матрицы
            }
        printf("%.2lf ", matrix_C[i][j]);
        }
    printf("\n");
    }
}



void F_minus(int line_A, int stolb_A, int line_B, int stolb_B, double **matrix_A, double **matrix_B, double **matrix_C){

    if(line_A != line_B || stolb_A != stolb_B){
        printf("Matrica A ne ravna matrice B\n");
        return;
    }

    printf("A - B = C\n");
    for(int l = 0; l < line_A; l++){
        for(int c = 0; c < stolb_B; c++){                     //получившаяся матрица
            matrix_C[l][c] = matrix_A[l][c] - matrix_B[l][c];
            printf("%.2lf ", matrix_C[l][c]);

        }
        printf("\n");
    }
}



void F_summa(int line_A, int stolb_A, int line_B, int stolb_B, double **matrix_A, double **matrix_B, double **matrix_C){

    if(line_A != line_B || stolb_A != stolb_B){
        printf("Matrica A ne ravna matrice B\n");
        return;
    }

    printf("A + B = C\n");
    for(int l = 0; l < line_A; l++){
        for(int c = 0; c < stolb_B; c++){                     //получившаяся матрица
            matrix_C[l][c] = matrix_A[l][c] + matrix_B[l][c];
            printf("%.2lf ", matrix_C[l][c]);

        }
        printf("\n");
    } 

    
}
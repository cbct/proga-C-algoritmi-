#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "func.h"

#define N 32

//https://matrixcalc.org/ru/#%7B%7B2,6,5%7D,%7B7,8,9%7D%7D*%7B%7B6,8%7D,%7B2,6%7D,%7B5,1%7D%7D


int main()
{
    int line_A, stolb_A, line_B, stolb_B;

    printf("Kakoi razmer matrici vi hotite? \n 1 chislo - kolichestvo stroc \n 2 chislo - colichestvo stolbcov \n");
    printf("--------------------------------------------------------------------- \n");


    printf("Kolichestvo strok matrici A: ");
    scanf("%d", &line_A);
    printf("Kolichestvo stolbcov matrici A: ");
    scanf("%d", &stolb_A);
    


    double **matrix_A, **matrix_B, **matrix_C;

    matrix_A = (double **)malloc(line_A * sizeof(double *));            //выделение памяти

    for(int i=0; i<line_A; i++){
        matrix_A[i] = (double *)malloc(stolb_A * sizeof(double));
    }



    matrix_C = (double **)malloc(line_A * sizeof(double *));            //выделение памяти

    for(int i=0; i<line_A; i++){
        matrix_C[i] = (double *)malloc(stolb_A * sizeof(double));
    }


    
    for(int l=0; l<line_A; l++){
        printf("Vvedite znachenie %d stroci matrici A: ", l+1);           //ввод значений матрицы
        for(int c=0; c<stolb_A; c++){
            scanf("%lf", &matrix_A[l][c]);
        }
    }

    printf("Matrica A: \n");
    for(int l=0; l<line_A; l++){
        for(int c=0; c<stolb_A; c++){                     //получившаяся матрица
            printf("%.2lf ", matrix_A[l][c]);
        }
        printf("\n");
    }


    printf("Kolichestvo strok matrici B: ");
    scanf("%d", &line_B);
    printf("Kolichestvo stolbcov matrici B: ");
    scanf("%d", &stolb_B);


    matrix_B = (double **)malloc(line_B * sizeof(double *));            //выделение памяти
    for(int i=0; i<line_B; i++){
        matrix_B[i] = (double *)malloc(stolb_B * sizeof(double));
    }




    for(int l=0; l<line_B; l++){
        printf("Vvedite znachenie %d stroci matrici B: ", l+1);           //ввод значений матрицы
        for(int c=0; c<stolb_B; c++){
            scanf("%lf", &matrix_B[l][c]);
        }
    }



    printf("Matrica B: \n");
    for(int l=0; l<line_B; l++){
        for(int c=0; c<stolb_B; c++){                     //получившаяся матрица
            printf("%.2lf ", matrix_B[l][c]);
        }
        printf("\n");
    }





    char deystvie[N];


    int vihod = 1;
    void (*ycazatel)(int, int, int, int, double**, double**, double**);

    while(vihod == 1){

        printf("--------------------------------------------------------------------- \n");

        printf("Matrica A: \n");
        for(int l=0; l<line_A; l++){
            for(int c=0; c<stolb_A; c++){                     //получившаяся матрица
                printf("%.2lf ", matrix_A[l][c]);
            }
            printf("\n");
        } 

        printf("Matrica B: \n");
        for(int l=0; l<line_B; l++){
            for(int c=0; c<stolb_B; c++){                     //получившаяся матрица
                printf("%.2lf ", matrix_B[l][c]);
            }
        printf("\n");
        }

        printf("--------------------------------------------------------------------- \n");

        printf("Vozmojnie deystvia s matricami '+', '-', '*'\n");
        getchar();
        fgets(deystvie, N, stdin);

        for(int i = 0; i < N; i++){
            if(deystvie[i] == '+'){
            ycazatel = F_summa;
            ycazatel(line_A, stolb_A, line_B, stolb_B, matrix_A, matrix_B, matrix_C);
            }



            if(deystvie[i] == '-'){
                ycazatel = F_minus;
                ycazatel(line_A, stolb_A, line_B, stolb_B, matrix_A, matrix_B, matrix_C);
            }

            

            if(deystvie[i] == '*'){
                ycazatel = F_mult;
                ycazatel(line_A, stolb_A, line_B, stolb_B, matrix_A, matrix_B, matrix_C);
            }
            else
                break;
        }
        printf("eshe raz? (1 - yes, 2 - no): ");
        scanf("%i", &vihod);
    }








    for(int i=0; i < line_A; i++){
        free(matrix_A[i]);
    }
    free(matrix_A);


    for(int i=0; i < line_B; i++){
        free(matrix_B[i]);
    }
    free(matrix_B);


    for(int i=0; i < line_A; i++){
        free(matrix_C[i]);
    }
    free(matrix_C);

    getchar();
    return 0;
}































































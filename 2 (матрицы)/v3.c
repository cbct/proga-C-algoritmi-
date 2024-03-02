#include <stdio.h>
#include <stdlib.h>


int main()
{
    int line, stolb;
    double **matrix;

    printf("Kakoi razmer matrici vi hotite? \n 1 chislo - kolichestvo stroc 2 chislo - colichestvo stolbcov \n kolichestvo strok: ");
    scanf("%d", &line);
    printf("Kolichestvo stolbcov: ");
    scanf("%d", &stolb);

    matrix = (double **)malloc(line * sizeof(double *));            //выделение памяти

    for(int i=0; i<line; i++){
        matrix[i] = (double *)malloc(stolb * sizeof(double));
    }
    

    for(int l=0; l<line; l++){
        printf("Vvedite znachenie %d stroci: ", l+1);           //ввод значений матрицы
        for(int c=0; c<stolb; c++){
            scanf("%lf", &matrix[l][c]);
        }
    }

    printf("Vasha matrica: \n");
    for(int l=0; l<line; l++){
        for(int c=0; c<stolb; c++){                     //получившаяся матрица
            printf("%.2lf ", matrix[l][c]);
        }
        printf("\n");
    }

    printf("--------------------------------------------------------------------------- \n");

    double sumL = 0;

    for(int i= 0; i<line; i++){
        for(int j= 0; j<stolb; j++){            //сумма диагоналы начиная с индексов 0 0
            if(i == j)
                sumL += matrix[i][j];
        }    
    }



    
    double sumR = 0;
    int stolB = stolb - 1;

    for(int i = 0; i < line; i++){
        if (stolB >= 0 && i < line){
        sumR += matrix[i][stolB];
        stolB -= 1;
        }
        
        if (stolB <= 0 && i > line){    //сумма диагоналы начиная с правого верхнего угла
        sumR += matrix[i][stolB];
        stolB -= 1;
        }
    }

  

    printf("Summa diagonali c [0][0]: %lf \n", sumL);
    printf("Summa diagonali c [0][%d]: %lf \n",stolb-1, sumR);
    printf("--------------------------------------------------------------------- \n");

    double **matrix_b, **matrix_c;

    matrix_c = (double **)malloc(line * sizeof(double *));
    for (int i = 0; i < line; i++) {
        matrix_c[i] = (double *)malloc(stolb * sizeof(double));             //выделение памяти
    }


    if(stolb == line){
        printf("Kvadrat matrici: \n");
        matrix_b = (double **)malloc(line * sizeof(double *));              //если количество строк и столбцов равное то вычисляется квадрат матрицы
        for (int i = 0; i < line; i++) {
            matrix_b[i] = (double *)malloc(stolb * sizeof(double));
        }

        
        for (int i = 0; i < line; i++) {
            for (int j = 0; j < stolb; j++) {
                matrix_b[i][j] = matrix[i][j];              //матрице В присваиваем значения матрицы А
            }
        }

        for (int i = 0; i < line; i++) {
            for (int j = 0; j < stolb; j++) {
                matrix_c[i][j] = 0;
                for (int k = 0; k < stolb; k++) {
                    matrix_c[i][j] += matrix[i][k] * matrix_b[k][j];        //вычисление квадрата матрицы
                }
            }
        }



        for(int l = 0; l<line; l++){
            for(int c = 0; c<stolb; c++){
                printf("%.2lf ", matrix_c[l][c]);       //вывод умножения
            }
            printf("\n");
        }



        for (int i = 0; i < stolb; i++) {
            free(matrix_b[i]);
        }
        free(matrix_b);
    }

    
    else{
        printf("ERROR kvadrat \n");
    }


    printf("--------------------------------------------------------------------- \n");
    for(int i=0; i<line; i++){
        free(matrix[i]);
    }
    free(matrix);

    for (int i = 0; i < line; i++) {
        free(matrix_c[i]);
    }
    free(matrix_c);

    getchar();
    return 0;
}








































































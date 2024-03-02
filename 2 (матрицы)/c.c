#include <stdio.h>
#include <stdlib.h>

int main()
{
    int line, stolb;
    double **matrix;
    printf("   -----                                                                   \n");

    printf("Kakoi razmer matrici vi hotite? \n 1 chislo - kolichestvo stroc 2 chislo - colichestvo stolbcov \n kolichestvo strok: ");
    scanf("%d", &line);
    printf("Kolichestvo stolbcov: ");
    scanf("%d", &stolb);

    matrix = (double **)malloc(line * sizeof(double *));

    for(int i=0; i<line; i++)
    {
        matrix[i] = (double *)malloc(stolb * sizeof(double));                //*динамическая память
    }
//* -------------------------------------------------------------------------------------------------
    for(int l=0; l<line; l++)
    {
        printf("Vvedite znachenie %d stroci: ", l+1);
        for(int c=0; c<stolb; c++)
        {
            scanf("%lf", &matrix[l][c]);
        }
    }

    printf("--------------------------------------------------------------------------- \n");

    printf("Vasha matrica: \n");
    for(int l=0; l<line; l++)
    {
        for(int c=0; c<stolb; c++)
        {
            printf("%.2lf ", matrix[l][c]);
        }
        printf("\n");
    }

    printf("--------------------------------------------------------------------------- \n");

    double sumL = 0;

    for(int i= 0; i<line; i++){
        for(int j= 0; j<stolb; j++)
        {
            if(i == j)
                sumL += matrix[i][j];
        }    
    }





    double double_matrix, sumR = 0;
    int stolB = stolb - 1;

    for(int i = 0; i < line; i++)
    {
        if (stolB >= 0 && i < line) {
        sumR += matrix[i][stolB];
        stolB -= 1;
        }
        
        if (stolB <= 0 && i > line) { // add this check
        sumR += matrix[i][stolB];
        stolB -= 1;
        }
        }

    for(int i = 0; i < line; i++){
        for(int j = 0; j < stolb; j++){
        double_matrix +=matrix[i][j] * 2;
        }
    }
   
  



    printf("Summa diagonali c [0][0]: %lf \n", sumL);
    printf("Summa diagonali c [0][%d]: %lf \n",stolb-1, sumR);
    printf("--------------------------------------------------------------------- \n");

    printf("Kvadrat matrici: \n");
    for(int l=0; l<line; l++)
    {
        for(int c=0; c<stolb; c++)
        {
            printf("%.2lf ", matrix[l][c] * matrix[l][c]);
        }
        printf("\n");
    }


    printf("--------------------------------------------------------------------- \n");
    for(int i=0; i<line; i++)
    {
        free(matrix[i]);
    }
    free(matrix);

    getchar();
    return 0;
}



































































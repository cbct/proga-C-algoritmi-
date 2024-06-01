#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 32




int main(){

    int n;
    double chislo;
    double **matrix_A;

    printf("vvedite razmer matrici n na n: ");
    scanf("%i", &n);
    printf("Razmer matrici: %i na %i\n", n, n);

    matrix_A = (double **)malloc(n * sizeof(double *));

    for(int i = 0; i < n; i++){
        matrix_A[i] = (double *)malloc(n * sizeof(double));
    }

    for(int i = 0; i < n; i++){
        printf("Vvedite znachenia %i stroki: ", i + 1);
        for(int j = 0; j < n; j++){
            scanf("%lf", &chislo);
            matrix_A[i][j] = chislo;
        }
    }

    printf("\nmatrix_A\n");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%.2lf ", matrix_A[i][j]);
        }
        printf("\n");
    }



    FILE *new;
    new = fopen("vihod.txt", "w");
    if (new == NULL) {
        printf("ERROR!\n");
        return 1;
    }

    time_t t = time(NULL);
    struct tm *time = localtime(&t);

    fprintf(new, "%04d.%02d.%02d Time - %02d:%02d:%02d matrix[%i][%i] = %.2lf", time->tm_year +1900, 
                                                            time->tm_mon +1, 
                                                            time->tm_mday, 
                                                            time->tm_hour, 
                                                            time->tm_min, 
                                                            time->tm_sec,
                                                            n - 1, n - 1, matrix_A[n - 1][n - 1]);



    fclose(new);

    for(int i = 0; i < n; i++){
        free(matrix_A[i]);
    }
    free(matrix_A);

    return 0;
}




// printf("Nastoyashee vrema: %04d.%02d.%02d Time - %02d:%02d:%02d\n", time->tm_year +1900, 
            //                                                                     time->tm_mon +1, 
            //                                                                     time->tm_mday, 
            //                                                                     time->tm_hour, 
            //                                                                     time->tm_min, 
            //    

















































































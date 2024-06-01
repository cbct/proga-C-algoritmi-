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



































// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <time.h>
// #include <unistd.h>

// #define N 100




// int main(){
    
//     double time_spent = 0.0;
//     clock_t begin = clock();

//     int n;
//     int **matrix_A, **matrix_B ;

//     printf("vvedite razmer matrici n na n: ");
//     scanf("%i", &n);
//     printf("Razmer matrici: %i na %i\n", n, n);

//     matrix_A = (int **)malloc(n * sizeof(int *));
//     matrix_B = (int **)malloc(n * sizeof(int *));
    
//     for(int i = 0; i < n; i++){
//         matrix_A[i] = (int *)malloc(n * sizeof(int));
//     }
    
//     for(int i = 0; i < n; i++){
//         matrix_B[i] = (int *)malloc(n * sizeof(int));
//     }
    
    
    
//     FILE *new;
//     new = fopen("input.txt", "w");
    
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             int chislo = rand() % (N + 1);
//             matrix_A[i][j] = chislo;
//             fprintf(new, "%i ", matrix_A[i][j]);
//         }
//         fprintf(new, "\n");
//     }
    
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             int chislo = rand() % (N + 1);
//             matrix_B[i][j] = chislo;
//             fprintf(new, "%i ", matrix_B[i][j]);
//         }
//         fprintf(new, "\n");
//     }
    
    
//     fclose(new);
    
    
    
    
    
    
//     // FILE *new;
//     // new = fopen("input.txt", "w");
    
    
    
    
//     clock_t end = clock();
//     time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 
//     printf("Time is %f seconds", time_spent);
    
    
    

//     for(int i = 0; i < n; i++){
//         free(matrix_A[i]);
//     }
//     free(matrix_A);
    
//     for(int i = 0; i < n; i++){
//         free(matrix_B[i]);
//     }
//     free(matrix_B);
    
    

//     return 0;
// }

























































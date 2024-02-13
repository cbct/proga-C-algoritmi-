#include <stdio.h>

int main()
{

    double m3x3[3][3]= {0, 0, 0, 
                        0, 0, 0, 
                        0, 0, 5.0};

    printf("Massiv Default  %lf %lf %lf \n", m3x3[0][0], m3x3[0][1],m3x3[0][2]);
    printf("                %lf %lf %lf \n", m3x3[1][0], m3x3[1][1],m3x3[1][2]);
    printf("                %lf %lf %lf \n", m3x3[2][0], m3x3[2][1],m3x3[2][2]);
    printf("-----------------------------------------------------------------------------------\n \n");




    double x =0, y =0, z =0;

    printf("Vvedite celie chisla dla manniva 3x3, stroka 1: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    m3x3[0][0] = x;
    m3x3[0][1] = y;
    m3x3[0][2] = z;

    printf("Vvedite celie chisla dla manniva 3x3, stroka 2: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    m3x3[1][0] = x;
    m3x3[1][1] = y;
    m3x3[1][2] = z;

    printf("Vvedite celie chisla dla manniva 3x3, stroka 3: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    m3x3[2][0] = x;
    m3x3[2][1] = y;
    m3x3[2][2] = z;





    printf("You massiv: %lf %lf %lf \n", m3x3[0][0], m3x3[0][1],m3x3[0][2]);
    printf("            %lf %lf %lf \n", m3x3[1][0], m3x3[1][1],m3x3[1][2]);
    printf("            %lf %lf %lf \n", m3x3[2][0], m3x3[2][1],m3x3[2][2]);
    printf("-----------------------------------------------------------------------------------\n \n");

    double sumL = 0, sumR = 0;

    sumL = m3x3[0][0] + m3x3[1][1] + m3x3[2][2];
    sumR = m3x3[0][2] + m3x3[1][1] + m3x3[2][0];

    printf("Summa chisel po diagonali s tochki A00: %lf\n", sumL);
    printf("Summa chisel po diagonali s tochki A02: %lf\n", sumR);
    printf("-----------------------------------------------------------------------------------\n \n");


    int m2x2[2][2] = {1, 2,
                      3, 4};


    int o = 0, p = 0;

    printf("Default matrix: %d %d\n", m2x2[0][0], m2x2[0][1]);
    printf("                %d %d\n", m2x2[1][0], m2x2[1][1]);


    printf("Vvedite znachenia matrici 2x2, 1 stroki: ");
    scanf("%d %d", &o, &p);

    m2x2[0][0] = o; 
    m2x2[0][1] = p; 


    printf("Vvedite znachenia matrici 2x2, 2 stroki: ");
    scanf("%d %d", &o, &p);

    m2x2[1][0] = o; 
    m2x2[1][1] = p;
    printf("-----------------------------------------------------------------------------------\n \n");

    printf("You matrix 2x2: %d %d\n", m2x2[0][0], m2x2[0][1]);
    printf("                %d %d\n", m2x2[1][0], m2x2[1][1]);





    printf("Kvadrat matrici: \n");
    for(int i = 0; i < 2; i++){
        printf("%d ", m2x2[0][i] * m2x2[0][i]);
    }
    printf("\n");

    for(int i = 0; i < 2; i++){
        printf("%d ", m2x2[1][i] * m2x2[1][i]);
        
    }


    getchar();
    return 0;
}




































































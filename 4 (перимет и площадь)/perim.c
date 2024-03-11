#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double perimetr(double AB, double AC, double BC)
{
    double sum = AB + AC + BC;
    return sum;
}


double multf(double AB, double AC, double BC)
{
    double result, polper = (perimetr(AB, AC, BC) / 2);
    result = sqrt(polper * (polper - AB) * (polper - AC) * (polper - BC));
    return result;
}

int triugol_good (double AB, double AC, double BC)
{
    if (AB <= 0 || AC <= 0 || BC <= 0) {
        return 0;
    }
    if (AB + AC > BC && AC + BC > AB && AB + BC > AC) {
        return 1;
    }
    return 0;
}

// онлайн калькулятор площади треугольника
// https://calc.by/math-calculators/area-triangle.html

int main()
{
    printf("_______________VICHISLENIE PERIMETRA I PLOSHADI TREYGOLNICA_____________ \n\n");
    printf("Vvedite znacheni storon treugolnica A B C\n");

    double per, S, storona_AB, storona_AC, storona_BC;
    char storoni[3][3] = {"AB", "AC", "BC"};

    printf("Vvedite znachenie storoni AB: ");
    scanf("%lf", &storona_AB);

    printf("Vvedite znachenie storoni AC: ");
    scanf("%lf", &storona_AC);

    printf("Vvedite znachenie storoni BC: ");
    scanf("%lf", &storona_BC);

    if (triugol_good(storona_AB, storona_AC, storona_BC)){
        printf("---------Vashi znachenia ctoron---------\n");
        printf("AB: %.2lf\n", storona_AB);
        printf("AC: %.2lf\n", storona_AC);
        printf("BC: %.2lf\n", storona_BC);
        

        printf("---------raschet perimetra i ploshadi---------\n");
        per = perimetr(storona_AB, storona_AC, storona_BC);
        printf("Perimetr treygolnica ABC raven: ~ %.2lf\n", per);

        S = multf(storona_AB, storona_AC, storona_BC);
        printf("Ploshad treygolnica ABC ravna: ~ %.2lf\n", S);
    }
    else {
        printf("Takogo treygolnica ne syshestvyet\n");
    }
    return 0;
}




















































































































































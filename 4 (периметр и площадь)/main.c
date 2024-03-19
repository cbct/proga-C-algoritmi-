#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "func.h"


// онлайн калькулятор площади треугольника
// https://calc.by/math-calculators/area-triangle.html

int main()
{
    printf("_______________VICHISLENIE PERIMETRA I PLOSHADI TREYGOLNICA_____________ \n\n");
    printf("Vvedite znacheni storon treugolnica A B C\n");

    double per, S, storona_AB, storona_AC, storona_BC;

    printf("Vvedite znachenie storoni AB: ");
    scanf("%lf", &storona_AB);

    printf("Vvedite znachenie storoni AC: ");
    scanf("%lf", &storona_AC);

    printf("Vvedite znachenie storoni BC: ");
    scanf("%lf", &storona_BC);

    if(triugol_good(storona_AB, storona_AC, storona_BC)){
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

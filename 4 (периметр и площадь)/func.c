#include <math.h>
#include <stdbool.h>

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

bool triugol_good (double AB, double AC, double BC)
{
    if (AB <= 0 || AC <= 0 || BC <= 0) {
        return false;
    }
    if (AB + AC > BC && AC + BC > AB && AB + BC > AC) {
        return true;
    }
    return false;
}
#include <stdio.h>
#include "geomittel.h"

int main() {
    double n1 = 7;
    double n2 = 6;
    double result;
    result = geoMittel(n1, n2);
    printf("Number 1 = %f\n",n1);
    printf("Number 2 = %f\n",n2);
    printf("Result = %f\n",result);
    return 0;
}

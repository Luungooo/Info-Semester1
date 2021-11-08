#include <stdio.h>
#include "geoAverage.h"

int main() {
    double n1;
    double n2;
    printf("Input Number 1: ");
    scanf("%lf%*c",&n1);
    printf("Input Number 2: ");
    scanf("%lf%*c",&n2);
    double result;
    result = geoAverage(n1, n2);
    printf("Number 1 = %f\n",n1);
    printf("Number 2 = %f\n",n2);
    printf("Result = %f",result);
    return 0;
}

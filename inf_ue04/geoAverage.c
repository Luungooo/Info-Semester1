#include "geoAverage.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double geoAverage(double number1, double number2) {
    if (number1 < 0 || number2 < 0) {
        printf("Error: Numbers can't be negative.\n");
        printf("Exiting Program.\n");
        exit(EXIT_FAILURE);
    }
    double ans = sqrt(number1 * number2);
    return ans;
}

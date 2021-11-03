#include "geomittel.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double geoMittel(double zahl1, double zahl2) {
    if(zahl1 < 0 || zahl2 < 0) {
        printf("Error: Numbers can't be negative.\n");
        printf("Exiting Program.\n");
        exit(EXIT_FAILURE);
    }
    double ans = sqrt(zahl1 * zahl2);
    return ans;
}

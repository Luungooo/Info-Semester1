#include <stdio.h>
#include <math.h>

int main() {
    const double PI = 2 * acos(0.0);
    double a[3];
    double b[3];
    double scalarProduct;
    double valueA;
    double valueB;
    double phase;
    double crossProduct[3];
    printf("Input first vector:\n");
    for (int i = 0; i < 3; i++) {
        printf("Row %d: ", i + 1);
        scanf("%lf%*c", &a[i]);
    }
    printf("Input second vector:\n");
    for (int i = 0; i < 3; i++) {
        printf("Row %d: ", i + 1);
        scanf("%lf%*c", &b[i]);
    }
    for (int i = 0; i < 3; i++) {
        scalarProduct += a[i] * b[i];
    }
    valueA = sqrt(pow(a[0], 2) + pow(a[1], 2) + pow(a[2], 2));
    valueB = sqrt(pow(b[0], 2) + pow(b[1], 2) + pow(b[2], 2));
    crossProduct[0] = a[1] * b[2] - a[2] * b[1];
    crossProduct[1] = a[2] * b[0] - a[0] * b[2];
    crossProduct[2] = a[0] * b[1] - a[1] * b[0];
    if (crossProduct[0] == 0 && crossProduct[1] == 0 && crossProduct[2] == 0) {
        phase = 0;
    } else {
        phase = acos(scalarProduct / (valueA * valueB)) * 180 / PI;
    }
    printf("Scalar product:\n%lf\n", scalarProduct);
    printf("Value of a:\n%lf\n", valueA);
    printf("Value of b:\n%lf\n", valueB);
    printf("Phase between vectors:\n%lf\n", phase);
    printf("Cross product:\n");
    printf("/ %lf \\\n", crossProduct[0]);
    printf("| %lf |\n", crossProduct[1]);
    printf("\\ %lf /\n", crossProduct[2]);
    return 0;
}

#include<stdio.h>

#define pi 3.14159f

int main() {
    float r;
    float h;
    float A;
    float V;
    printf("Geben Sie den Radius des Zylinders ein: ");
    scanf("%f%*c", &r);
    printf("Geben Sie die Höhe des Zylinders ein: ");
    scanf("%f%*c", &h);
    A = 2.0f * pi * r * r + 2.0f * pi * r * h;
    V = pi * r * r * h;
    printf("Die Oberfläche des Zylinders beträgt: %f\n", A);
    printf("Das Volumen des Zylinders beträgt: %f\n", V);
    return 0;
}

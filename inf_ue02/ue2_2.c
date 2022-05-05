#include<stdio.h>
#define pi 3.14159

int main() {
	float r;
	float h;
	float A;
	float V;
	printf("Geben Sie den Radius des Zylinders ein: ");
	scanf("%f", &r);
	printf("Geben Sie die Höhe des Zylinders ein: ");
	scanf("%f", &h);
	A = 2 * pi * r * r + 2 * pi * r * h;
	V = pi * r * r * h;
	printf("Die Oberfläche des Zylinders beträgt: %f\n", A); 
	printf("Das Volumen des Zylinders beträgt: %f\n", V);
	return 0;
}

#include <stdio.h>
#include <ctype.h>

int main() {
	float Tc;
	float Tf;
	char selection;
	do {
		printf("Type F if you want to convert Celsius to Fahrenheit\n");
		printf("Type C to convert Fahrenheit to Celsius\n");
		selection = getchar();
		selection = toupper(selection);
		switch (selection) {
			case 'F':
				printf("Enter temperature in Celsius\n");
				scanf("%f%*c",&Tc);
				Tf = 9.0 * Tc / 5.0 + 32.0;
				printf("F = %.1f\n", Tf);
				break;
			case 'C':
				printf("Enter temperature in Fahrenheit\n");
				scanf("%f%*c",&Tf);			
				Tc = 5.0 * (Tf - 32.0) / 9.0;
				printf("C = %.1f\n", Tc);
				break;
		}
	} while (selection == 'C' || selection == 'F');
	printf("No valid input detected. Exiting Program.\n");
	return 0;
}

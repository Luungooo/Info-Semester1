#include <stdio.h>
#include <ctype.h>

int main() {
    float Tc;
    float Tf;
    char selection;
    printf("*****************************************************\n");
    do {
        printf("Type F if you want to convert Celsius to Fahrenheit\n");
        printf("Type C to convert Fahrenheit to Celsius\n");
        selection = getchar();
        selection = toupper(selection);
        switch (selection) {
            case 'F':
                printf("Enter temperature in Celsius\n");
                scanf("%f%*c", &Tc);
                Tf = 9.0f * Tc / 5.0f + 32.0f;
                printf("F = %.1f\n", Tf);
                break;
            case 'C':
                printf("Enter temperature in Fahrenheit\n");
                scanf("%f%*c", &Tf);
                Tc = 5.0f * (Tf - 32.0f) / 9.0f;
                printf("C = %.1f\n", Tc);
                break;
        }
        printf("*****************************************************\n");
    } while (selection == 'C' || selection == 'F');
    printf("No valid input detected. Exiting Program.\n");
    return 0;
}

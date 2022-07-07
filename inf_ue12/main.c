#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char * toArray(int number)
{
    int n = log10(number) + 1;
    int i;
    char *numberArray = calloc(n, sizeof(char));
    for (i = n-1; i >= 0; --i, number /= 10)
    {
        numberArray[i] = (number % 10) + '0';
    }
    return numberArray;
}

int main() {
    char ch[50];
    FILE *fp;
    FILE *fp2;
    int num;
    char *ptr;
    int powerTwo;
    int powerThree;
    fp = fopen("zahlenfolge.txt", "w+");
    fp2 = fopen("verarbeitet.txt", "w+");


    for (int i = 0; i < 10; i++) {
        fprintf(fp, "%d\n", i + 1);
    }

    rewind(fp);

    while((fgets(ch,50,fp)) != NULL) {
        num = strtol(ch, &ptr, 10);
        powerTwo = num * num;
        powerThree = num * num * num;
        fprintf(fp2, "%s ", toArray(num));
        fprintf(fp2, "%s ", toArray(powerTwo));
        fprintf(fp2, "%s\n", toArray(powerThree));
    }

    fclose(fp);
    fclose(fp2);
}

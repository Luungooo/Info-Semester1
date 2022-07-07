#include <stdio.h>
#include <time.h>

void isPrime(unsigned long long num) {
    if (num > 2 && num % 2 == 0) {
        for (int i = 2; num > 1; i++) {
            while (num % i == 0) {
                printf("%d ", i);
                num = num / i;
            }
        }
    } else {
        for (int i = 3; num > 1; i += 2) {
            while (num % i == 0) {
                printf("%d ", i);
                num = num / i;
            }
        }
    }
}

/*
void isPrime2(unsigned long long num) {
    unsigned long long firstFactor = 1;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            firstFactor = i;
        }
    }
    unsigned long long secondFactor = num / firstFactor;
    if (firstFactor == secondFactor) {
        printf("%llu\n", firstFactor);
    } else {
        printf("%llu, %llu\n", firstFactor, secondFactor);
    }
    if (firstFactor == 1) {
        printf("Number is prime");
    }

}
*/
int main() {
    unsigned long long num;
    scanf("%llu%*c", &num);
    clock_t start, end;
    double Rechenzeit;
    start = clock();
    isPrime(num);
    end = clock();
    Rechenzeit = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Operation finished after %.2f seconds.\n", Rechenzeit);
    return 0;
}

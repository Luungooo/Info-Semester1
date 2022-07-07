#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

unsigned long long faculty(unsigned long long n) {
    unsigned long long result = 1;
    if (n < 0) {
        printf("Error: Numbers can't be negative.\n");
        printf("Exiting Program.\n");
        exit(EXIT_FAILURE);
    }
    if (n > 0) {
        result = n * faculty(n - 1);
    }
    return result;
}

unsigned long long facultyFor(unsigned long long n) {
    unsigned long long result = 1;
    if (n < 0) {
        printf("Error: Numbers can't be negative.\n");
        printf("Exiting Program.\n");
        exit(EXIT_FAILURE);
    }
    for (int i = (int) n; i > 0; i--) {
        result = result * i;
    }
    return result;
}

int main() {
    unsigned long long result = 1;
    unsigned long long n = 0;
    while (ULLONG_MAX / result > n) {
        n++;
        result = faculty(n);
    }
    printf("Maximum value for n is %llu\n", n);
    printf("%llu", result);
    return 0;
}

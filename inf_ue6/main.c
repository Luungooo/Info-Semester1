#include <stdio.h>
#include <math.h>

void isPrime(unsigned long long num) {
    for (int i = 2; num > 1; i++) {
        while (num % i == 0) {
            printf("%d ", i);
            num = num / i;
        }
    }
}

int main() {
    unsigned long long num;
    scanf("%llu%*c", &num);
    isPrime(num);
    return 0;
}
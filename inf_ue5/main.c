#include <stdio.h>
#include <stdlib.h>

int faculty(int n) {
    int result = 1;
    if (n < 1) {
        printf("Error: Numbers can't be negative.\n");
        printf("Exiting Program.\n");
        exit(EXIT_FAILURE);
    }
    if (n > 0) {
        result = result * n * faculty(n - 1);
    }
    return result;
}

int faculty2(int n) {
    int result = 1;
    if (n < 1) {
        printf("Error: Numbers can't be negative.\n");
        printf("Exiting Program.\n");
        exit(EXIT_FAILURE);
    }
    for (int i = n; i > 0; i--) {
        result = result * i;
    }
    return result;
}

int main() {
    int result = faculty2(17);
    printf("%d", result);
    return 0;
}

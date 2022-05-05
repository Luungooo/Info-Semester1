#include <stdio.h>
#include <stdlib.h>
int berechneZ(int x, int y) {
    int z = x * y;
    return z;
}
int main() {
    int x = 5;
    int y = 10;
    int z = berechneZ(x,y);
    printf("z hat den Wert: %d.\n", z);
    return 0;
}
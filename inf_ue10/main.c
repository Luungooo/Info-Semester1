#include <stdio.h>

void vertauscheMitPointern(int* pointerA, int* pointerB) {
    int temp = *pointerA;
    *pointerA = *pointerB;
    *pointerB = temp;
}

int main() {
    int x = 5;
    int y = 10;
    int* pointerX = &x;
    int* pointerY = &y;
    vertauscheMitPointern(pointerX, pointerY);
    printf("x hat nun den Wert %d und y hat den Wert %d.\n", x, y);
    return 0;
}

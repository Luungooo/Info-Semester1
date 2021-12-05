#include <stdio.h>

int main() {
    const unsigned int rows = 10;
    const unsigned int columns = 5;
    unsigned int myArray[rows][columns];
    unsigned int myOtherArray[rows][columns];
    unsigned int count = 1;
    unsigned int otherCount = 1;
    unsigned int myVector[columns];
    unsigned int resultVector[rows];
    unsigned int result = 0;

    for (unsigned int i = 0; i < rows; i++) {
        for (unsigned int j = 0; j < columns; j++) {
            myArray[i][j] = count;
            count++;
        }
    }

    for (unsigned int i = 0; i < columns; i++) {
        myVector[i] = (i + 1) * 10;
    }

    unsigned int k = 0;
    unsigned int l = 0;

    while (otherCount <= 50) {
        myOtherArray[k][l] = otherCount;
        if (otherCount % 5 == 0) {
            k++;
        }
        l++;
        if (otherCount % 5 == 0) {
            l = 0;
        }
        otherCount++;
    }

    for (unsigned int i = 0; i < rows; i++) {
        result = 0;
        l=0;
        for (unsigned int j = 0; j < columns; j++) {
            result = result + myArray[i][j] * myVector[l];
            l++;
        }
        resultVector[i] = result;
    }

    for (unsigned int i = 0; i < rows ; i++) {
        printf("%d\n", resultVector[i]);
    }
    return 0;
}

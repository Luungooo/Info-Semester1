#include <stdio.h>
#include <string.h>

#include "vehicle.h"

void vehiclePrint(vehicle* vehicle1) {
    printf("\n%s\n", vehicle1->name);
    printf("%d\n", vehicle1->power);
    printf("%.3f\n", vehicle1->displacement);
    printf("%d\n", vehicle1->topSpeed);
}

vehicle vehicleCreate(char name[50], unsigned int power, float displacement, unsigned int topSpeed) {
    vehicle vehicle1;
    strcpy(vehicle1.name, name);
    vehicle1.power = power;
    vehicle1.displacement = displacement;
    vehicle1.topSpeed = topSpeed;
    return vehicle1;
}

int vehicleCompare(vehicle* a, vehicle* b) {
    printf("\n%s vs. ", a->name);
    printf("%s\n", b->name);

    int counter = 0;
    if (a->power > b->power) { counter++; }
    if (a->displacement > b->displacement) { counter++; }
    if (a->topSpeed > b->topSpeed) { counter++; }

    if (counter >= 2) {
        printf("%s is better\n", a->name);
        return 0;
    } else {
        printf("%s is better\n", b->name);
        return 1;
    }
}

int vehicleTune(vehicle* a, unsigned int power, float displacement, unsigned int topSpeed) {
    int counter = 0;

    if (power != 0) {
        counter++;
        a->power = power;
    }
    if (displacement != 0) {
        counter++;
        a->displacement = displacement;
    }
    if (topSpeed != 0) {
        counter++;
        a->topSpeed = topSpeed;
    }

    if (counter > 0) { return 1; }
    return 0;
}

void vehicleSwapEngines(vehicle* a, vehicle* b) {
    unsigned int temp1;
    float temp2;

    temp1 = a->power;
    a->power = b->power;
    b->power = temp1;

    temp2 = a->displacement;
    a->displacement = b->displacement;
    b->displacement = temp2;

    temp1 = a->topSpeed;
    a->topSpeed = b->topSpeed;
    b->topSpeed = temp1;
}

int main() {
    vehicle bmw1;
    strcpy(bmw1.name, "BMW G20");
    bmw1.power = 134;
    bmw1.displacement = 1.998f;
    bmw1.topSpeed = 238;

    vehiclePrint(&bmw1);

    vehicle mercedes1 = vehicleCreate("Mercedes Baureihe 222", 225, 3.498f, 250);
    vehiclePrint(&mercedes1);

    vehicleCompare(&bmw1, &mercedes1);

    vehicleTune(&bmw1, 179, 2.399f, 250);
    vehiclePrint(&bmw1);

    vehicleSwapEngines(&bmw1, &mercedes1);
    vehiclePrint(&bmw1);
    vehiclePrint(&mercedes1);
}

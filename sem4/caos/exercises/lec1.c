#include <stdio.h>

void printArray(long* array);

int main(void) {
    long array[20];

    for (int i = 0; i < 20; ++i) {
        array[i] = i+10;
    }
    printArray(array);
}

void printArray(long* array) {
    for (int i = 0; i < 20; i++) {
        printf("%lu and %lx\n", array[i], array[i]);

    }
}
#include <iostream>
#include "DyV.h"

void testEnteros() {
    int vec[] = {10, 7, 8, 9, 1, 5};
    int size = sizeof(vec) / sizeof(vec[0]);

    std::cout << "Vector original (enteros): ";
    for (int i = 0; i < size; i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    QuickSort(vec, 0, size - 1);

    std::cout << "Vector ordenado (enteros): ";
    for (int i = 0; i < size; i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

void testFloats() {
    float vec[] = {4.5, 2.2, 5.1, 1.9, 3.0};
    int size = sizeof(vec) / sizeof(vec[0]);

    std::cout << "Vector original (floats): ";
    for (int i = 0; i < size; i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    QuickSort(vec, 0, size - 1);

    std::cout << "Vector ordenado (floats): ";
    for (int i = 0; i < size; i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

void testChars() {
    char vec[] = {'d', 'a', 'e', 'b', 'c'};
    int size = sizeof(vec) / sizeof(vec[0]);

    std::cout << "Vector original (chars): ";
    for (int i = 0; i < size; i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    QuickSort(vec, 0, size - 1);

    std::cout << "Vector ordenado (chars): ";
    for (int i = 0; i < size; i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    testEnteros();
    testFloats();
    testChars();
    return 0;
}


#include <iostream>
#include "DyV.h" // Incluye la implementación de búsqueda binaria

// Función para probar la búsqueda binaria con enteros
void testEnteros() {
    int vec[] = {1, 3, 5, 7, 9};
    int tam = sizeof(vec) / sizeof(vec[0]);

    std::cout << "Prueba con enteros (ascendente):" << std::endl;
    int resultado = BusquedaBinaria(5, vec, 0, tam - 1);
    if (resultado != -1) {
        std::cout << "Buscar 5: Encontrado en la posición " << resultado << std::endl;
    } else {
        std::cout << "Buscar 5: No encontrado" << std::endl;
    }

    resultado = BusquedaBinaria(6, vec, 0, tam - 1);
    if (resultado != -1) {
        std::cout << "Buscar 6: Encontrado en la posición " << resultado << std::endl;
    } else {
        std::cout << "Buscar 6: No encontrado" << std::endl;
    }
}

// Función para probar la búsqueda binaria con floats
void testFloats() {
    float vec[] = {0.5, 1.2, 2.4, 3.6, 4.8};
    int tam = sizeof(vec) / sizeof(vec[0]);

    std::cout << "Prueba con floats (ascendente):" << std::endl;
    int resultado = BusquedaBinaria(3.6f, vec, 0, tam - 1);
    if (resultado != -1) {
        std::cout << "Buscar 3.6: Encontrado en la posición " << resultado << std::endl;
    } else {
        std::cout << "Buscar 3.6: No encontrado" << std::endl;
    }

    resultado = BusquedaBinaria(5.0f, vec, 0, tam - 1);
    if (resultado != -1) {
        std::cout << "Buscar 5.0: Encontrado en la posición " << resultado << std::endl;
    } else {
        std::cout << "Buscar 5.0: No encontrado" << std::endl;
    }
}

// Función para probar la búsqueda binaria con caracteres
void testChars() {
    char vec[] = {'a', 'c', 'e', 'g', 'i'};
    int tam = sizeof(vec) / sizeof(vec[0]);

    std::cout << "Prueba con caracteres (ascendente):" << std::endl;
    int resultado = BusquedaBinaria('e', vec, 0, tam - 1);
    if (resultado != -1) {
        std::cout << "Buscar 'e': Encontrado en la posición " << resultado << std::endl;
    } else {
        std::cout << "Buscar 'e': No encontrado" << std::endl;
    }

    resultado = BusquedaBinaria('b', vec, 0, tam - 1);
    if (resultado != -1) {
        std::cout << "Buscar 'b': Encontrado en la posición " << resultado << std::endl;
    } else {
        std::cout << "Buscar 'b': No encontrado" << std::endl;
    }
}

int main() {
    testEnteros();
    testFloats();
    testChars();
    return 0;
}


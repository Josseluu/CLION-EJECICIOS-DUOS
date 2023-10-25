#include <iostream>

int main() {
    int n;
    std::cout << "Ingresa la cantidad de enteros que deseas almacenar dinámicamente: ";
    std::cin >> n;


    int* arregloDinamico = new int[n];


    if (arregloDinamico == nullptr) {
        std::cout << "Error: No se pudo asignar memoria dinámica." << std::endl;
        return 1;
    }


    for (int i = 0; i < n; i++) {
        arregloDinamico[i] = i * 10;
    }


    std::cout << "Elementos del arreglo dinámico:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "arregloDinamico[" << i << "] = " << arregloDinamico[i] << std::endl;
    }


    delete[] arregloDinamico;

    return 0;
}

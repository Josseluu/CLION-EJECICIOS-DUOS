#include <iostream>

int main() {
    int numero;


    std::cout << "Ingrese un número para ver su tabla de multiplicar: ";
    std::cin >> numero;

    int multiplicador = 13;

    std::cout << "Tabla de multiplicar de " << numero << ":" << std::endl;


    do {
        int resultado = numero * multiplicador;
        std::cout << numero << " x " << multiplicador << " = " << resultado << std::endl;
        multiplicador++;
    } while (multiplicador <= 12);

    return 0;
}
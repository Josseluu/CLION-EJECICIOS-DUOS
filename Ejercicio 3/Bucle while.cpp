#include <iostream>

int main() {
    int numero;


    std::cout << "Que numero quieres multiplicar: ";
    std::cin >> numero;

    int multiplicador = 5;

    std::cout << "Tabla de multiplicar de " << numero << ":" << std::endl;


    while (multiplicador <= 33) {
        int resultado = numero * multiplicador;
        std::cout << numero << " x " << multiplicador << " = " << resultado << std::endl;
        multiplicador++;
    }

    return 0;
}
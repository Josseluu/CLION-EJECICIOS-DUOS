#include <iostream>

int main() {
    int numero = 42;
    int &referencia = numero;

    std::cout << "Valor de la variable: " << numero << std::endl;
    std::cout << "Valor a través de la referencia: " << referencia << std::endl;


    referencia = 100;

    std::cout << "Nuevo valor de la variable: " << numero << std::endl;
    std::cout << "Nuevo valor a través de la referencia: " << referencia << std::endl;

    return 0;
}

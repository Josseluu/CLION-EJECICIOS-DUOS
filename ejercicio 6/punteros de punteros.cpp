#include <iostream>

int main() {
    int numero = 42;
    int* punteroEntero = &numero;
    int** punteroAPuntero = &punteroEntero;

    std::cout << "Valor de la variable: " << numero << std::endl;
    std::cout << "Valor a través del puntero a entero: " << *punteroEntero << std::endl;
    std::cout << "Valor a través del puntero a puntero: " << **punteroAPuntero << std::endl;


    **punteroAPuntero = 100;

    std::cout << "Nuevo valor de la variable: " << numero << std::endl;
    std::cout << "Nuevo valor a través del puntero a entero: " << *punteroEntero << std::endl;
    std::cout << "Nuevo valor a través del puntero a puntero: " << **punteroAPuntero << std::endl;

    return 0;
}

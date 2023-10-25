#include <iostream>

int main() {
    int numero = 42;
    double decimal = 3.14;
    char caracter = 'A';


    int* punteroEntero = &numero;
    double* punteroDecimal = &decimal;
    char* punteroCaracter = &caracter;


    *punteroEntero = 100;
    *punteroDecimal = 2.718;
    *punteroCaracter = 'B';


    std::cout << "Variable entera: " << numero << " (Original: 42)" << std::endl;
    std::cout << "Variable de punto flotante: " << decimal << " (Original: 3.14)" << std::endl;
    std::cout << "Variable de carácter: " << caracter << " (Original: 'A')" << std::endl;

    return 0;
}

#include <iostream>

int main() {

    int entero = 42;
    double decimal = 3.14;
    char caracter = 'A';
    bool booleano = true;

    std::cout << "Esto es un numero entero: " << entero << std::endl;
    std::cout << "Esto es un numero con decimal: " << decimal << std::endl;
    std::cout << "Esto es una letra: " << caracter << std::endl;

    int suma = entero + 10;
    double producto = decimal * 2;
    char siguienteCaracter = caracter + 1;

    std::cout << "La suma es: " << suma << std::endl;
    std::cout << "El resultado da: " << producto << std::endl;
    std::cout << "Otra letra: " << siguienteCaracter << std::endl;

    return 0;
}

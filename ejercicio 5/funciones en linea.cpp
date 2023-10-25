#include <iostream>
inline int cuadrado(int x) {
    return x * x;
}

int main() {
    int numero = 5;

    int resultado = cuadrado(numero);

    std::cout << "El cuadrado de " << numero << " es " << resultado << std::endl;

    return 0;
}
#include <iostream>

double calcularAreaCuadrado(double lado) {
    double area = lado * lado;
    return area;
}

void imprimirMensaje() {
    std::cout << "¡Hola desde el procedimiento!" << std::endl;
}

int main() {
    double ladoDelCuadrado = 11.0;
    double area = calcularAreaCuadrado(ladoDelCuadrado);

    std::cout << "El área del cuadrado con lado " << ladoDelCuadrado << " es: " << area << std::endl;

    imprimirMensaje();

    return 0;
}

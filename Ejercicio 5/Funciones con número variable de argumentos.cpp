#include <iostream>
#include <cstdarg>


double calcularPromedio(int cantidad, ...) {
    va_list args;
    va_start(args, cantidad);

    double suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += va_arg(args, int);
    }

    va_end(args);

    return suma / cantidad;
}

int main() {
    double promedio1 = calcularPromedio(3, 10, 20, 30);
    double promedio2 = calcularPromedio(5, 2, 4, 6, 8, 10);

    std::cout << "Promedio 1: " << promedio1 << std::endl;
    std::cout << "Promedio 2: " << promedio2 << std::endl;

    return 0;
}

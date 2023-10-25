#include <iostream>
#include <vector>

using Operacion = int(*)(int, int);
using Enteros = std::vector<int>;

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int main() {
    Operacion operacion = suma;
    int resultado = operacion(10, 5);
    std::cout << "Resultado de la suma: " << resultado << std::endl;

    operacion = resta;
    resultado = operacion(10, 5);
    std::cout << "Resultado de la resta: " << resultado << std::endl;


    std::cout << std::endl;

    return 0;
}

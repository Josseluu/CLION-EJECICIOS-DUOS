#include <iostream>


unsigned long long factorial(int n) {
    if (n == 0) {
        return 1; // Caso base: factorial de 0 es 1
    } else {
        return n * factorial(n - 1); // Llamada recursiva
    }
}

int main() {
    int num;
    std::cout << "Ingresa un número para calcular su factorial: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "No se puede calcular el factorial de un número negativo." << std::endl;
    } else {
        unsigned long long result = factorial(num);
        std::cout << "El factorial de " << num << " es " << result << std::endl;
    }

    return 0;
}

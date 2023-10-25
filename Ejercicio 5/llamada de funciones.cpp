#include <iostream>

int multiplicacion(int a, int b) {
    return a * b;
}

double division(int a, int b) {
    if (b == 0) {
        std::cout << "Error: No se puede dividir por cero." << std::endl;
        return 0.0;
    }
    return static_cast<double>(a) / b;
}

int main() {
    int num1 = 60;
    int num2 = 2;


    int resultadoMultiplicacion = multiplicacion(num1, num2);
    double resultadoDivision = division(num1, num2);


    std::cout << "Resultado de la multiplicación: " << resultadoMultiplicacion << std::endl;
    std::cout << "Resultado de la división: " << resultadoDivision << std::endl;

    return 0;
}

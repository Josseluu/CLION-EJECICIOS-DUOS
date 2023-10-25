#include <iostream>


int sumar(int a, int b) {
    return a + b;
}


float sumar(float a, float b) {
    return a + b;
}


std::string sumar(std::string a, std::string b) {
    return a + b;
}

int main() {
    int entero1 = 33, entero2 = 33;
    float flotante1 = 3.5, flotante2 = 2.5;
    std::string cadena1 = "Apruebame, ";
    std::string cadena2 = "Rubén";


    int resultadoEnteros = sumar(entero1, entero2);
    float resultadoFlotantes = sumar(flotante1, flotante2);
    std::string resultadoCadenas = sumar(cadena1, cadena2);

    std::cout << "Resultado de la suma de enteros: " << resultadoEnteros << std::endl;
    std::cout << "Resultado de la suma de decimales: " << resultadoFlotantes << std::endl;
    std::cout << "Resultado de sumas: " << resultadoCadenas << std::endl;

    return 0;
}

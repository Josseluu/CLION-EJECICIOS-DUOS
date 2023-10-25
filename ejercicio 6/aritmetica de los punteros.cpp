#include <iostream>

int main() {
    int numeros[] = {10, 20, 30, 40, 50};

    int* puntero = numeros;


    std::cout << "Valor del primer elemento: " << *puntero << std::endl;


    puntero++;


    std::cout << "Valor del segundo elemento: " << *puntero << std::endl;


    puntero += 2;


    std::cout << "Valor del cuarto elemento: " << *puntero << std::endl;


    puntero--;


    std::cout << "Valor del tercer elemento: " << *puntero << std::endl;

    return 0;
}

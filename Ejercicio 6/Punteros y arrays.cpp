#include <iostream>

int main() {
    const int tamano = 5;
    int miArray[tamano] = {10, 20, 30, 40, 50};


    int* puntero = miArray;


    for (int i = 0; i < tamano; i++) {

        *puntero += 5;
        std::cout << "Elemento " << i << ": " << *puntero << std::endl;


        puntero++;
    }

    return 0;
}

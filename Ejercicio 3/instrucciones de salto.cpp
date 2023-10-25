#include <iostream>

int main() {
    int numero;

    while (true) {
        std::cout << "Ingrese un número positivo (o 0 para salir): ";
        std::cin >> numero;

        if (numero == 0) {
            std::cout << "Saliendo del bucle..." << std::endl;
            break;
        }

        std::cout << "El número ingresado es: " << numero << std::endl;
    }

    std::cout << "El bucle ha terminado." << std::endl;

    return 0;
}

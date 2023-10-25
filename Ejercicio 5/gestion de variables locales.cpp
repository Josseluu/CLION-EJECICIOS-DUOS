#include <iostream>

int variableGlobal = 50;

void funcionEjemplo() {
    int variableLocal = 10;
    variableGlobal = 20;

    std::cout << "Dentro de la función:" << std::endl;
    std::cout << "variableLocal = " << variableLocal << std::endl;
    std::cout << "variableGlobal = " << variableGlobal << std::endl;
}

int main() {
    int variableLocal = 5;
    variableGlobal = 30;

    std::cout << "En la función main:" << std::endl;
    std::cout << "variableLocal (main) = " << variableLocal << std::endl;
    std::cout << "variableGlobal (main) = " << variableGlobal << std::endl;

    funcionEjemplo();

    std::cout << "De nuevo en la función main:" << std::endl;
    std::cout << "variableLocal (main) = " << variableLocal << std::endl;
    std::cout << "variableGlobal (main) = " << variableGlobal << std::endl;

    return 0;
}

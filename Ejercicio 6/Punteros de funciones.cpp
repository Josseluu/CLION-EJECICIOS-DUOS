#include <iostream>


int suma(int a, int b) {
    return a + b;
}


int resta(int a, int b) {
    return a - b;
}

int main() {
    int (*funcionPtr)(int, int);

    funcionPtr = suma;

    int resultado1 = funcionPtr(5, 3);
    std::cout << "Resultado de la suma: " << resultado1 << std::endl;

    funcionPtr = resta;

    int resultado2 = funcionPtr(10, 4);
    std::cout << "Resultado de la resta: " << resultado2 << std::endl;

    return 0;
}


#include <iostream>
#include <string>

int main() {

    std::string nombre;
    int edad;

    std::cout << "Dime como te llamas: ";
    std::cin >> nombre;

    std::cout << "Y cuantos años tienes: ";
    std::cin >> edad;

    std::cout << "Hola " << nombre << " Tienes " << edad << " años.\n";

    return 0;
}
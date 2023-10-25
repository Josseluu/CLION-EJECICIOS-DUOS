#include <iostream>
using namespace std;


void saludar(string nombre, string saludo = "Hola") {
    cout << saludo << ", " << nombre << "!" << endl;
}

int main() {

    saludar("Ruben");


    saludar("Ruben", "Que tengas buen dia ");

    return 0;
}

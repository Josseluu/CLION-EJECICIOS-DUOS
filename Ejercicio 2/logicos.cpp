#include <iostream>

int main() {
    bool esDiaLaboral = true;
    bool estaLloviendo = false;
    bool tienesParaguas = true;

    if (esDiaLaboral) {
        if (estaLloviendo && !tienesParaguas) {
            std::cout << "Deberías quedarte en casa, está lloviendo y no tienes paraguas." << std::endl;
        } else {
            std::cout << "Puedes salir a trabajar, o bien tienes un paraguas o no está lloviendo." << std::endl;
        }
    } else {
        std::cout << "Hoy no es un día laboral, disfruta de tu día libre." << std::endl;
    }

    return 0;
}



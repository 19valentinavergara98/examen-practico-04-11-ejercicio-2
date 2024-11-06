#include <iostream>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <cmath>

int convertirHorasEnECTS(int horas) {
    const int horasPorECTS = 25;
    double ects = static_cast<double>(horas) / horasPorECTS;

    // Redondear hacia arriba a partir de .3
    if (ects - static_cast<int>(ects) >= 0.3) {
        ects = std::ceil(ects);
    } else {
        ects = std::floor(ects);
    }

    return static_cast<int>(ects);
}

int main() {
    int horas;
    std::cout << "Introduce las horas del curso: ";
    std::cin >> horas;

    if (horas <= 0) {
        std::cout << "Por favor, introduce un número válido de horas." << std::endl;
        return 1;
    }

    int ects = convertirHorasEnECTS(horas);
    std::cout << "El curso de " << horas << " horas equivale a " << ects << " créditos ECTS." << std::endl;

    return 0;
}
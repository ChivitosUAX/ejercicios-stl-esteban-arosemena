#include "geometria.h"

namespace Geometria {
    const double PI = 3.1415926535;

    Circulo::Circulo(double r) : radio(r) {}

    double Circulo::calcularArea() const {
        return PI * radio * radio;
    }

    double Circulo::calcularPerimetro() const {
        return 2 * PI * radio;
    }

    double calcularAreaCirculo(double radio) {
        return PI * radio * radio;
    }
}
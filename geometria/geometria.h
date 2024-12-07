#ifndef GEOMETRIA_H
#define GEOMETRIA_H

namespace Geometria {
    double calcularAreaTriangulo(double base, double altura);
    double calcularAreaCirculo(double radio);

    class Circulo {
    public:
        Circulo(double r);
        double calcularArea() const;
        double calcularPerimetro() const;
    private:
        double radio;
    };
}

#endif // GEOMETRIA_H
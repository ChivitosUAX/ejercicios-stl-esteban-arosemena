#include <iostream>
#include "matematicas/matematicas.h"
#include "geometria/geometria.h"
#include "ciencias/física/fisica.h"
#include <vector>
#include <map>
#include <set>

int main() {
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;

    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5.0, 3.0) << std::endl;
    Geometria::Circulo c(5.0);
    std::cout << "Area del circulo: " << c.calcularArea() << std::endl;
    std::cout << "Perimetro del circulo: " << c.calcularPerimetro() << std::endl;

    std::cout << "Energia: " << Ciencia::Fisica::calcularEnergia(10.0) << " Joules" << std::endl;

    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);

    std::map<std::string, int> edad;
    edad["Juan"] = 25;
    edad["Maria"] = 30;
    edad.erase("Juan");

    std::set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);
    conjunto.erase(1);

    return 0;
}
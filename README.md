# ejercicios-stl-esteban-arosemena

https://github.com/ChivitosUAX/ejercicios-stl-esteban-arosemena.git

Enunciado
Ejercicio 1: Utilización completa de un espacio de nombres Escribe un programa que defina un espacio de nombres "Matemáticas" que contenga dos funciones: suma y resta. Luego, desde la función main, utiliza estas funciones.

Ejercicio 2: Espacio de nombres repartido entre diferentes archivos Crea un programa donde defines un espacio de nombres "Geometría" en dos archivos de código separados (por ejemplo, "triángulo.cpp" y "círculo.cpp"). Cada archivo debe contener una función (por ejemplo, "calcularArea") correspondiente a la geometría específica. Finalmente, desde la función main en otro archivo, utiliza estas funciones.

Ejercicio 3: Relación entre clase y espacio de nombres Define una clase "Círculo" dentro de un espacio de nombres "Geometría". Incluye al menos dos métodos en esta clase, como "calcularArea" y "calcularPerímetro". Utiliza esta clase desde la función main.

Ejercicio 4: Declaración de subespacios de nombres Crea un espacio de nombres "Ciencia" que contenga un subespacio de nombres "Física". En "Física", define una constante para la velocidad de la luz y una función para calcular la energía a partir de la masa (E=mc^2). Utiliza la constante y la función desde la función main.

Ejercicio 5: Presentación de la STL Escribe un programa que utilice al menos tres diferentes contenedores de la STL (por ejemplo, vector, map y set). Para cada contenedor, realiza al menos una operación (como agregar elementos, eliminar elementos o buscar elementos).

Propuesta de Solución:

Ejercicio 1: Utilización completa de un espacio de nombres

En un archivo .cpp:


namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
}

int main() {
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;
    return 0;
}
Ejercicio 2: Espacio de nombres repartido entre diferentes archivos

triangulo.cpp:


namespace Geometria {
    double calcularAreaTriangulo(double base, double altura) {
        return (base * altura) / 2;
    }
}
circulo.cpp:


namespace Geometria {
    double calcularAreaCirculo(double radio) {
        return 3.14 * radio * radio;
    }
}
main.cpp:


int main() {
    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;
    return 0;
}
Ejercicio 3: Relación entre clase y espacio de nombres

En un archivo .cpp:


namespace Geometria {
    class Circulo {
    private:
        double radio;
    public:
        Circulo(double r) : radio(r) {}
        double calcularArea() {
            return 3.14 * radio * radio;
        }
        double calcularPerimetro() {
            return 2 * 3.14 * radio;
        }
    };
}

int main() {
    Geometria::Circulo c(5);
    std::cout << "Area: " << c.calcularArea() << std::endl;
    std::cout << "Perimetro: " << c.calcularPerimetro() << std::endl;
    return 0;
}
Ejercicio 4: Declaración de subespacios de nombres

En un archivo .cpp:


namespace Ciencia {
    namespace Fisica {
        const double c = 299792458;
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }
}

int main() {
    std::cout << "Energia: " << Ciencia::Fisica::calcularEnergia(10) << std::endl;
    return 0;
}
Ejercicio 5: Presentación de la STL

En un archivo .cpp:


#include <vector>
#include <map>
#include <set>

int main() {
    // Vector
    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);

    // Map
    std::map<std::string, int> edad;
    edad["Juan"] = 25;
    edad.erase("Juan");

    // Set
    std::set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);
    conjunto.erase(1);

    return 0;
}

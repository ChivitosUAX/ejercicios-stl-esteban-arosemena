# ejercicios-stl-esteban-arosemena

https://github.com/ChivitosUAX/ejercicios-stl-esteban-arosemena.git

## EL ENUNCIADO DEL EJERCICIO SE ENCUENTRA AL FINAL.

# Proceso de mi programa:

Colección de Ejercicios STL
===========================

Este repositorio presenta una serie de ejercicios que combinan el uso de espacios de nombres (namespaces), clases en C++, y contenedores de la Biblioteca Estándar de Plantillas (STL). Los ejercicios se han organizado siguiendo una estructura de directorios que facilita la navegación y el mantenimiento del código.

Estructura del proyecto
-----------------------

ColeccionEjerciciosSTL/
├── CMakeLists.txt
├── README.md
├── main.cpp
├── matematicas/
│   ├── matematicas.cpp
│   └── matematicas.h
├── geometria/
│   ├── geometria.h
│   ├── triangulo.cpp
│   └── circulo.cpp
└── ciencias/
    └── fisica/
        ├── fisica.cpp
        └── fisica.h

Descripción de las carpetas y archivos principales
--------------------------------------------------

- **matematicas/**
  - `matematicas.h`: Declaraciones de las funciones `suma` y `resta` en el espacio de nombres `Matematicas`.
  - `matematicas.cpp`: Implementación de las funciones `suma` y `resta`.

- **geometria/**
  - `geometria.h`: Declaraciones de funciones y clases en el espacio de nombres `Geometria`.
  - `triangulo.cpp`: Implementación de la función `calcularAreaTriangulo`.
  - `circulo.cpp`: Implementación de la clase `Circulo` y la función `calcularAreaCirculo`.

- **ciencias/fisica/**
  - `fisica.h`: Declaración de la constante de la velocidad de la luz `c` y la función `calcularEnergia` en `Ciencia::Fisica`.
  - `fisica.cpp`: Implementación de la función `calcularEnergia`.

- **main.cpp**: Archivo principal que utiliza las funciones y clases definidas en los diferentes espacios de nombres, así como contenedores de la STL (`vector`, `map`, `set`).

- **CMakeLists.txt**: Archivo de configuración para compilar el proyecto usando CMake.

Ejercicios Desarrollados
------------------------

1. **Ejercicio 1: Uso completo de un espacio de nombres**
   - Espacio de nombres `Matematicas` con funciones `suma` y `resta`.
   - Ejemplo de uso en `main.cpp`.

2. **Ejercicio 2: Espacio de nombres en múltiples archivos**
   - Espacio de nombres `Geometria` distribuido en varios archivos.
   - Ejemplo de uso en `main.cpp`.

3. **Ejercicio 3: Clase dentro de un espacio de nombres**
   - Clase `Circulo` con métodos para calcular área y perímetro.
   - Ejemplo de uso en `main.cpp`.

4. **Ejercicio 4: Subespacios de nombres**
   - Espacio de nombres `Ciencia::Fisica` con constante `c` y función `calcularEnergia`.
   - Ejemplo de uso en `main.cpp`.

5. **Ejercicio 5: Uso de la STL**
   - Uso de contenedores `vector`, `map` y `set` para realizar operaciones básicas.

Requisitos
----------

- Un compilador C++ compatible con C++11 o superior.
- [CMake](https://cmake.org/) para la configuración del proyecto.

Compilación y Ejecución
------------------------

1. Crear un directorio para la compilación (por ejemplo, `build`):
   ```bash
   mkdir build
   cd build
   ```

2. Ejecutar CMake para generar los archivos de compilación:
   ```bash
   cmake ..
   ```

3. Compilar el proyecto:
   ```bash
   cmake --build .
   ```
   (O, dependiendo del sistema, `make` o `ninja` si se han instalado)

4. Ejecutar el programa:
   ```bash
   ./ColeccionEjerciciosSTL
   ```



***

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

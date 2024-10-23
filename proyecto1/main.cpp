#include <iostream>

#include "Estudiante.h"
#include "Persona.h"
#include <fmt/core.h>


int suma(int a, int b) {
    return a + b;
}

int g = 20;

int main() {
    std::cout << "Hola Mundo" << std::endl;
    std::cout << "La suma es: " << suma(5, 3) << std::endl;
    std::cout << "Valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;

    Persona persona1;
    persona1.setNombre("Clara");
    persona1.setEdad(23);
    persona1.setGenero("Femenino");
    std::cout << "Nombre:" << persona1.getNombre() << std::endl;
    std::cout << "Edad:" << persona1.getEdad() << std::endl;
    std::cout << "Género:" << persona1.getGenero() << std::endl;

    Estudiante estudiante1;
    estudiante1.setNombre("Jorge");
    estudiante1.setEdad(25);
    estudiante1.setGenero("Masculino");
    estudiante1.setGrado("Segundo Año");
    estudiante1.mostrarDetalles();

    fmt::print("Prueba con fmt");

    return 0;
}
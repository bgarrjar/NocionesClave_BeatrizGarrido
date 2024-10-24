#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))

#include <iostream>
#include "funciones.h"
#include "matematicas.h"

int main()
{
    int a = 10;
    int b = 5;
    int c = 3;
    std::cout << "La suma de " << a << " mas " << b << " mas " << c << " es: " << suma(a, b, c) << std::endl;
    std::cout << "La resta de " << a << " menos " << b << " menos " << c << " es: " << resta(a, b, c) << std::endl;
    std::cout << "La multiplicacion de " << a << " por " << b << " por " << c << " es: " << multiplicacion(a, b, c) << std::endl;
    std::cout << "La división de " << a << " entre " << b << " es: " << division(a, b) << std::endl;

    double radio;
    std::cout << "Introduce el radio del circulo: ";
    std::cin >> radio;
    double area = AREA_CIRCULO(radio);
    std::cout << "El area del circulo con radio " << radio << " es " << area << std::endl;

    /* Ejercicio 6: he probado el compilador que viene por defecto (GCC) y el programa funcionaba correctamente. Después, he probado a cambiar al compilador de Visual Studio (MSVC) y el programa ha empezado a dar fallos, que al volver cambiar al de GCC han empezado a dar también.
    return 0;
}
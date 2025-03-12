#include <iostream>

int main(int argc, char const *argv[])
{
    int a; // Declaración de la variable para almacenar el número ingresado por el usuario
    std::cout << "Ingrese un número: ";
    std::cin >> a; // Leer el número ingresado por el usuario y almacenarlo en la variable 'a'

    // Verificar si el número es positivo y par
    if (a > 0 && a % 2 == 0) {
        std::cout << "El número es par y positivo." << std::endl;
    } else {
        std::cout << "El número no es par y positivo." << std::endl;
    }

    return 0; 
}

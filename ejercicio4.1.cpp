#include <iostream>

int main(int argc, char const *argv[])
{
    int arr[5]; // Declaración de un arreglo de 5 enteros
    int suma = 0; // Inicialización de la variable para almacenar la suma

    // Bucle para ingresar los valores en el arreglo y calcular la suma
    for (int i = 0; i < 5; ++i) {
        std::cout << "Ingrese un número para el índice " << i << ": ";
        std::cin >> arr[i]; // Leer el valor ingresado por el usuario y almacenarlo en el arreglo
        suma += arr[i]; // Sumar el valor ingresado a la variable suma
    }

    // Calcular y mostrar la suma de los elementos
    std::cout << "La suma de los elementos es: " << suma << std::endl;

    // Determinar si la suma es par o impar
    if (suma % 2 == 0) {
        std::cout << "La suma es par." << std::endl;
    } else {
        std::cout << "La suma es impar." << std::endl;
    }

    // Determinar si la suma es positiva o negativa
    if (suma > 0) {
        std::cout << "La suma es positiva." << std::endl;
    } else if (suma < 0) {
        std::cout << "La suma es negativa." << std::endl;
    } else {
        std::cout << "La suma es cero." << std::endl;
    }

    return 0;
}
#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    // Declaración de variables
    float A; // Monto final
    float P; // Cantidad inicial invertida
    float R; // Tasa de interés anual
    float N; // Número de veces que se aplica el interés al año
    float T; // Cantidad de años

    // Solicitar al usuario la cantidad inicial invertida
    std::cout << "Ingrese un número para cantidad inicial invertida: ";
    std::cin >> P;

    // Solicitar al usuario la tasa de interés anual
    std::cout << "Ingrese un número para tasa de interés anual: ";
    std::cin >> R;

    // Solicitar al usuario el número de veces que se aplica el interés al año
    std::cout << "Ingrese un número para número de veces que se aplica el interés al año: ";
    std::cin >> N;

    // Solicitar al usuario la cantidad de años
    std::cout << "Ingrese un número para cantidad de años: ";
    std::cin >> T;

    A = P * pow((1 + R / N), (N * T));
    // Mostrar el monto final
    std::cout << "El monto final es: " << A << std::endl;

    return 0;
}

#include <iostream>

int main(int argc, char const *argv[])
{
    // Declaración de variables
    int A; // Monto final
    int P; // Cantidad inicial invertida
    int R; // Tasa de interés anual
    int N; // Número de veces que se aplica el interés al año
    int T; // Cantidad de años

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

    // Calcular el monto final utilizando la fórmula del interés compuesto
    A = P * (1 + R / N) ^ (N * T);

    // Mostrar el monto final
    std::cout << "El monto final es: " << A << std::endl;

    return 0;
}

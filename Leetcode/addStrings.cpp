#include <iostream>
#include <vector>
using namespace std;

// Definición de la clase Solution
class Solution {
public:
    // Método para sumar dos números representados como cadenas
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1; // Índice para recorrer num1 desde el final
        int j = num2.size() - 1; // Índice para recorrer num2 desde el final
        int carry = 0; // Variable para almacenar el acarreo
        string res = ""; // Cadena para almacenar el resultado

        // Bucle para recorrer ambos números desde el final hacia el principio
        while (i >= 0 || j >= 0 || carry) {
            long sum = 0; // Variable para almacenar la suma de los dígitos y el acarreo

            // Sumar el dígito actual de num1 si i es válido
            if (i >= 0) {
                sum += (num1[i] - '0');
                i--;
            }

            // Sumar el dígito actual de num2 si j es válido
            if (j >= 0) {
                sum += (num2[j] - '0');
                j--;
            }

            // Sumar el acarreo
            sum += carry;

            // Calcular el nuevo acarreo
            carry = sum / 10;

            // Calcular el dígito actual y añadirlo al resultado
            sum = sum % 10;
            res = to_string(sum) + res;
        }

        // Devolver el resultado final
        return res;
    }
};

int main(int, char **)
{
    Solution mySol; // Crear una instancia de la clase Solution
    string num1 = "4205"; // Definir el primer número como cadena
    string num2 = "456"; // Definir el segundo número como cadena
    cout << mySol.addStrings(num1, num2) << endl; // Llamar al método addStrings y mostrar el resultado

    return 0; // Finalizar el programa
}
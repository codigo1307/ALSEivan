#include <iostream> // Incluir la biblioteca estándar de entrada/salida
#include "src/cuentaBancaria.cpp" // Incluir la implementación de la clase CuentaBancaria
#include <string> // Incluir la biblioteca de cadenas
#include <vector> // Incluir la biblioteca de vectores
#include <fstream> // Incluir la biblioteca de archivos
using namespace std; // Usar el espacio de nombres estándar


int main() {

    vector<CuentaBancaria> medidores;

    // Agregue 3 objetos al vector con valores iniciales
    medidores.push_back(CuentaBancaria(1000.0, "12345"));
    medidores.push_back(CuentaBancaria(2000.0, "67890"));
    medidores.push_back(CuentaBancaria(3000.0, "54321"));

    // Simule registro de consumo para cada medidor
    for (int i = 0; i < medidores.size(); i++) {
        float consumo = 100.0 * (i + 1); // Simulación de consumo
        medidores[i].retirar(consumo); // Retirar el consumo del saldo
    }
    // Imprimir el saldo de cada medidor
    for (int i = 0; i < medidores.size(); i++) {
        cout << "Medidor " << medidores[i].getNumeroCuenta() << ": Saldo restante: " << medidores[i].obtenerSaldo() << endl;
    }

    // Genere archivo de salida "reporte.txt" con ID y consumo
    ofstream archivoSalida("salidas/reporte.txt");

    return 0;
}
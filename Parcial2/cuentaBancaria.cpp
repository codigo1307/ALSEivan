#include <iostream> // Incluir la biblioteca estándar de entrada/salida
#include "src/cuentaBancaria.cpp" // Incluir la implementación de la clase CuentaBancaria
#include <string> // Incluir la biblioteca de cadenas
#include <vector> // Incluir la biblioteca de vectores
#include <fstream> // Incluir la biblioteca de archivos
using namespace std; // Usar el espacio de nombres estándar


int main() {

    vector<CuentaBancaria> cuentas;

    ofstream archivoSalida("../../Parcial2/salidas/reporte.txt"); // Abrir el archivo de salida
    if (!archivoSalida.is_open()) {
        cerr << "Error al abrir el archivo de salida." << endl;
        return 1; // Salir si no se puede abrir el archivo
    }

    // Agregue 3 objetos al vector con valores iniciales
    cuentas.push_back(CuentaBancaria(1000.0, "12345"));
    cuentas.push_back(CuentaBancaria(1500.0, "67890"));
    cuentas.push_back(CuentaBancaria(5000.0, "54321"));

    // Simule registro de consumo para cada medidor
    for (int i = 0; i < cuentas.size(); i++) {
        archivoSalida << "----------------------------------------" << endl;
        archivoSalida << cuentas[i] << endl; // Imprimir la cuenta
        float consumo = 1000.0 * (i + 1); // Simulación de consumo
        cuentas[i].retirar(consumo, archivoSalida); // Retirar el consumo
        archivoSalida << "Saldo restante: " << cuentas[i].obtenerSaldo() << endl;
    }
    //
    archivoSalida.close(); // Cerrar el archivo de salida
    return 0;
}
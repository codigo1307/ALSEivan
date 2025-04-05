#include <iostream> // Incluir la biblioteca estándar de entrada/salida
#include "src/cuentaBancaria.cpp" // Incluir la implementación de la clase CuentaBancaria
#include <string> // Incluir la biblioteca de cadenas
#include <vector> // Incluir la biblioteca de vectores
#include <fstream> // Incluir la biblioteca de archivos
using namespace std; // Usar el espacio de nombres estándar


int main() {

    vector<CuentaBancaria> medidores;

    ofstream archivoSalida("../../Parcial2/salidas/reporte.txt"); // Abrir el archivo de salida
    if (!archivoSalida.is_open()) {
        cerr << "Error al abrir el archivo de salida." << endl;
        return 1; // Salir si no se puede abrir el archivo
    }

    // Agregue 3 objetos al vector con valores iniciales
    medidores.push_back(CuentaBancaria(1000.0, "12345"));
    medidores.push_back(CuentaBancaria(1500.0, "67890"));
    medidores.push_back(CuentaBancaria(5000.0, "54321"));

    // Simule registro de consumo para cada medidor
    for (int i = 0; i < medidores.size(); i++) {
        archivoSalida << "----------------------------------------" << endl;
        archivoSalida << "Cuenta bancaria numero " << medidores[i].getNumeroCuenta() << ": ";
        float consumo = 1000.0 * (i + 1); // Simulación de consumo
        if (!medidores[i].retirar(consumo)){
            archivoSalida << "No se pudo retirar el consumo de " << consumo << medidores[i].getNumeroCuenta() << endl;
            archivoSalida << "Bloqueando cuenta..." << endl;
            medidores[i].bloquearCuenta(); // Bloquear la cuenta si no hay suficiente saldo
        } else {
            archivoSalida << "Se retiraron " << consumo << endl;
        }; // Retirar el consumo del saldo
        archivoSalida << "Saldo restante: " << medidores[i].obtenerSaldo() << endl;
    }
    //
    archivoSalida.close(); // Cerrar el archivo de salida
    return 0;
}
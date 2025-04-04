#ifndef CUENTABANCARIA_H
#define CUENTABANCARIA_H

#include <iostream>
using namespace std;

// Definición de la clase point2d
class CuentaBancaria {
private:
    float saldo;  // saldo de cuenta (privada)
    string numeroCuenta;  // saldo de cuenta (privada)
    bool cuentaBloqueada; // cuenta bloqueada (privada)

public:
    // Constructores
    CuentaBancaria(void); // Constructor por defecto
    CuentaBancaria(float s, string n); // Constructor con parámetros
    CuentaBancaria(const CuentaBancaria&); // Constructor de copia

    // Métodos Getter y Setter para acceder a el numero de cuenta y el saldo
    float obtenerSaldo() const; // Devuelve lo que queda en el saldo
    string getNumeroCuenta() const; // Devuelve el numero de cuenta
    void setNumeroCuenta(string numeroCuenta); // Establece el numero de cuenta
    void getCuentaBloqueada(); // Devuelve si la cuenta esta bloqueada o no

    // Metodos adicionales
    void depositar(float cantidad); // Depositar una cantidad al saldo
    bool retirar(float cantidad); // Retirar una cantidad del saldo
    bool bloquearCuenta(); // Bloquear la cuenta
    bool desbloquearCuenta(); // Desbloquear la cuenta

    // Sobrecarga del operador de inserción en el flujo de salida
    friend ostream& operator<<(ostream&, const CuentaBancaria&); // Imprimir un punto en un flujo de salida

    // Método para mostrar información del punto
    void display(string name); // Mostrar las coordenadas del punto con un nombre
    
};

#endif // POINT2D_H
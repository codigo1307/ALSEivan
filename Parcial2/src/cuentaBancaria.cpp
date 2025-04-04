#include "../include/cuentaBancaria.h" // Incluir la definición de la clase CuentaBancaria
#include <string> // Incluir string para manejar cadenas de texto
#include <iostream> // Incluir iostream para entrada/salida

// Constructor por defecto
CuentaBancaria::CuentaBancaria(void) {
    saldo = 0.0; // Inicializar saldo a 0
    numeroCuenta = ""; // Inicializar nombre a una cadena vacía
    cuentaBloqueada = false; // Inicializar cuenta no bloqueada
}
// Constructor con parámetros
CuentaBancaria::CuentaBancaria(float s, string n) {
    saldo = s; // Inicializar saldo con el valor proporcionado
    numeroCuenta = n; // Inicializar nombre con el valor proporcionado
    cuentaBloqueada = false; // Inicializar cuenta no bloqueada
}
// Constructor de copia
CuentaBancaria::CuentaBancaria(const CuentaBancaria& c) {
    saldo = c.saldo; // Copiar el valor de saldo
    numeroCuenta = c.numeroCuenta; // Copiar el valor de nombre
    cuentaBloqueada = c.cuentaBloqueada; // Copiar el estado de cuenta bloqueada
}
// Métodos Getter
float CuentaBancaria::obtenerSaldo() const {
    return saldo; // Devolver el valor de saldo
}
string CuentaBancaria::getNumeroCuenta() const {
    return numeroCuenta; // Devolver el valor de nombre
}
void CuentaBancaria::setNumeroCuenta(string n) {
    numeroCuenta = n; // Establecer el valor de nombre
}
bool CuentaBancaria::getCuentaBloqueada() {
    return cuentaBloqueada; // Devolver el estado de cuenta bloqueada
}
// Metodos adicionales
void CuentaBancaria::depositar(float cantidad) {
    if (cuentaBloqueada) {
        cout << "La cuenta esta bloqueada, no se puede depositar." << endl; // Mensaje de error si la cuenta está bloqueada
    } else {
        saldo += cantidad; // Sumar la cantidad al saldo
    }
}
bool CuentaBancaria::retirar(float cantidad) {
    if (cuentaBloqueada) {
        cout << "La cuenta esta bloqueada, no se puede retirar." << endl; // Mensaje de error si la cuenta está bloqueada
        return false; // No se puede retirar
    } else if (cantidad > saldo) {
        cout << "No hay suficiente saldo para retirar." << endl; // Mensaje de error si no hay suficiente saldo
        return false; // No se puede retirar
    } 
    saldo -= cantidad; // Restar la cantidad del saldo
    return true; // Retiro exitoso
}
bool CuentaBancaria::bloquearCuenta() {
    if (cuentaBloqueada) {
        cout << "La cuenta ya esta bloqueada." << endl; // Mensaje de error si la cuenta ya está bloqueada
        return false; // No se puede bloquear
    }
    cuentaBloqueada = true; // Bloquear la cuenta
    return cuentaBloqueada; // se bloqueo con exito
}
bool CuentaBancaria::desbloquearCuenta() {
    if (!cuentaBloqueada) {
        cout << "La cuenta ya esta desbloqueada." << endl; // Mensaje de error si la cuenta ya está desbloqueada
        return false; // No se puede desbloquear
    }
    cuentaBloqueada = false; // Desbloquear la cuenta
    return !cuentaBloqueada; // se desbloqueo con exito
}
// Sobrecarga del operador de inserción en el flujo de salida
ostream& operator<<(ostream& os, const CuentaBancaria& c) {
    os << "Numero de cuenta: " << c.numeroCuenta << ", Saldo: " << c.saldo; // Imprimir el número de cuenta y el saldo
    return os; // Devolver el flujo de salida
}
// Método para mostrar información de la cuenta
void CuentaBancaria::display() {
    cout << "Numero de cuenta: " << numeroCuenta << ", Saldo: " << saldo << endl; // Imprimir el nombre y la información de la cuenta
}
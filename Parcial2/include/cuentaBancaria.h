#ifndef CUENTABANCARIA_H
#define CUENTABANCARIA_H

#include <iostream>
using namespace std;

/** 
 * @brief Clase CuentaBancaria
 * @author Ivan Daniel Carpentier y Jonatan García Vásquez
 * @date 2025-04-04
*/


class CuentaBancaria {
private:
    float saldo;  ///< Saldo de la cuenta (privado).
    string numeroCuenta;  ///< Número de cuenta (privado).
    bool cuentaBloqueada; ///< Indica si la cuenta está bloqueada (privado).

public:
    /**
     * @brief Constructor por defecto.
     * Inicializa el saldo en 0, y el numero de cuenta como vacio, y la cuenta desbloqueada.
     */
    CuentaBancaria(void); 
    /**
     * @brief Constructor con parametros.
     * @param s saldo inicial de la cuenta.
     * @param n numero de la cuenta.
     * Inicializa el saldo y el numero de cuenta con los valores proporcionaddos, y la cuenta desbloqueada. 
     */
    CuentaBancaria(float s, string n);
    /**
     * @brief Consctructor de copia.
     * @param c objeto de la clase CuentaBancaria a copiar.
     * Inicializa el saldo, el numero de cuenta y el estado de la cuenta bloqueada con los valores del objeto proporcionado.
     * @note Este constructor permite crear una nueva cuenta bancaria como copia de otra existente.
     * @warning Asegúrate de que el objeto proporcionado sea válido antes de usar este constructor.
     */
    CuentaBancaria(const CuentaBancaria& c);

    /**
     * @brief obtiene el saldo de la cuenta.
     * @return saldo de la cuenta.
     */
    float obtenerSaldo() const; 
    /**
     * @brief obtiene el numero de cuenta.
     * @return Número de cuenta como una cadena.
     */
    string getNumeroCuenta() const; 

    /**
     * @brief Establece el número de cuenta.
     * @param n Nuevo número de cuenta.
     */
    void setNumeroCuenta(string n);

    /**
     * @brief Verifica si la cuenta está bloqueada.
     * @return `true` si la cuenta está bloqueada, `false` en caso contrario.
     */
    bool getCuentaBloqueada();

    /**
     * @brief Deposita una cantidad en la cuenta.
     * @param cantidad Cantidad a depositar.
     */
    void depositar(float cantidad);

    /**
     * @brief Retira una cantidad del saldo de la cuenta.
     * @param cantidad Cantidad a retirar.
     * @return `true` si la operación fue exitosa, `false` si no hay suficiente saldo o la cuenta está bloqueada.
     */
    bool retirar(float cantidad);

    /**
     * @brief Bloquea la cuenta bancaria.
     * @return `true` si la operación fue exitosa, `false` si la cuenta ya estaba bloqueada.
     */
    bool bloquearCuenta();

    /**
     * @brief Desbloquea la cuenta bancaria.
     * @return `true` si la operación fue exitosa, `false` si la cuenta ya estaba desbloqueada.
     */
    bool desbloquearCuenta();

    /**
     * @brief Sobrecarga del operador de inserción en el flujo de salida.
     * @param os Flujo de salida.
     * @param cuenta Objeto de tipo CuentaBancaria a imprimir.
     * @return Referencia al flujo de salida.
     */
    friend ostream& operator<<(ostream& os, const CuentaBancaria& cuenta);

    /**
     * @brief Muestra la información de la cuenta bancaria.
     */
    void display();
};

#endif // CUENTABANCARIA_H
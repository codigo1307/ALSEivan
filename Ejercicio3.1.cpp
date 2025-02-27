#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int habitaciones;
    cout << "Ingrese la cantidad de habitaciones: ";
    cin >> habitaciones;
    bool* reservas = new bool[habitaciones]();
    int opcion;
    int habitacion;
    do
    {
        cout << "Menú de opciones:" << endl;
        cout << "1. Reservar habitación" << endl;
        cout << "2. Liberar habitación" << endl;
        cout << "3. Verificar disponibilidad de habitación" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Ingrese el número de habitación a reservar: ";
            cin >> habitacion;
            if (habitacion >= 0 && habitacion < habitaciones){
                if (reservas[habitacion]){
                    cout << "Ya esta reservada esa habitación" << endl;
                } else {
                    reservas[habitacion] = true;
                    cout << "Habitación " << habitacion << " reservada exitosamente" << endl;
                }
            } else {
                cout << "Número de habitación no válido" << endl;
            }
            break;
        case 2:
            cout << "Ingrese el número de habitación a liberar: ";
            cin >> habitacion;
            if (habitacion >= 0 && habitacion < habitaciones){
                if (reservas[habitacion]){
                    reservas[habitacion] = false;
                    cout << "Habitación " << habitacion << " liberada exitosamente" << endl;
                } else {
                    cout << "La habitación no está reservada" << endl;
                }
            } else {
                cout << "Número de habitación no válido" << endl;
            }
            break;
        case 3:
            cout << "Ingrese el número de habitación a verificar: ";
            cin >> habitacion;
            if (habitacion >= 0 && habitacion < habitaciones){
                cout << "La habitación" << habitacion << (reservas[habitacion] ? "está" : "no está") << "reservada" << endl;
            } else {
                cout << "Número de habitación no válido" << endl;
            }
            break;
        case 4:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opción no válida." << endl;
            break;
    }
    } while (opcion != 4);
    
    delete[] reservas;
    return 0;
}
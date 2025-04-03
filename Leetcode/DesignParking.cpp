#include <iostream>
#include <vector>
#include <optional>
#include <string>
using namespace std;

// Definición de la clase ParkingSystem
class ParkingSystem {
    private:
        vector<int> parkingSpaces; // Vector para almacenar los espacios disponibles para cada tipo de coche
    public:
        // Constructor que inicializa los espacios de aparcamiento
        ParkingSystem(int big, int medium, int small) {
            parkingSpaces.push_back(big);    // Espacios para coches grandes
            parkingSpaces.push_back(medium); // Espacios para coches medianos
            parkingSpaces.push_back(small);  // Espacios para coches pequeños
        }

        // Método para configurar los espacios de aparcamiento
        void SetParkingSpaces(int big, int medium, int small) {
            parkingSpaces[0] = big;   // Establecer espacios para coches grandes
            parkingSpaces[1] = medium; // Establecer espacios para coches medianos
            parkingSpaces[2] = small;  // Establecer espacios para coches pequeños
        }

        // Método para añadir un coche al aparcamiento
        bool addCar(int carType) {
            if (carType < 1 || carType > 3) return false; // Validar tipo de coche (1: grande, 2: mediano, 3: pequeño)
            if (parkingSpaces[carType - 1] > 0) { // Verificar si hay espacio disponible para el tipo de coche
                parkingSpaces[carType - 1]--;    // Reducir el espacio disponible
                return true;                     // Coche aparcado con éxito
            }
            return false; // No hay espacio disponible
        }

        // Método para leer un vector de strings desde la entrada estándar
        vector<string> inputVector() {
            string input;
            cin >> input; // Leer la entrada completa
            vector<string> result;
            size_t start = 0, end = 0;

            // Buscar pares de comillas dobles
            while ((start = input.find('"', end)) != string::npos) {
                end = input.find('"', start + 1); // Buscar la siguiente comilla
                if (end != string::npos) {
                    result.push_back(input.substr(start + 1, end - start - 1)); // Extraer el substring entre comillas
                }
            }
            return result; // Devolver el vector de strings
        }

        // Método para leer un vector de vectores de enteros desde la entrada estándar
        vector<vector<int>> inputVectorInt() {
            string input;
            cin >> input; // Leer la entrada completa
            vector<vector<int>> result; // Vector de vectores de enteros
            size_t start = 0, end = 0;

            // Buscar corchetes que delimitan los vectores
            while ((start = input.find('[', end)) != string::npos) {
                end = input.find(']', start + 1); // Buscar el cierre del corchete
                if (end != string::npos) {
                    string sub = input.substr(start + 1, end - start - 1); // Extraer el contenido entre corchetes
                    vector<int> subVector;
                    size_t numStart = 0, numEnd = 0;

                    // Extraer los números dentro del subvector
                    while ((numEnd = sub.find(',', numStart)) != string::npos) {
                        subVector.push_back(stoi(sub.substr(numStart, numEnd - numStart))); // Convertir y agregar el número
                        numStart = numEnd + 1;
                    }
                    // Agregar el último número del subvector
                    if (numStart < sub.size()) {
                        subVector.push_back(stoi(sub.substr(numStart)));
                    }

                    result.push_back(subVector); // Agregar el subvector al resultado
                }
            }

            return result; // Devolver el vector de vectores de enteros
        }
};

int main() {
    ParkingSystem myParkingSystem(0, 0, 0); // Crear una instancia de ParkingSystem con espacios iniciales en 0
    vector<string> input = myParkingSystem.inputVector(); // Leer las operaciones desde la entrada
    vector<vector<int>> inputInt = myParkingSystem.inputVectorInt(); // Leer los parámetros de las operaciones
    vector<optional<bool>> output; // Vector para almacenar los resultados de las operaciones

    // Procesar las entradas
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == "ParkingSystem") {
            // Configurar los espacios de aparcamiento
            myParkingSystem.SetParkingSpaces(inputInt[i][0], inputInt[i][1], inputInt[i][2]);
            output.push_back(nullopt); // Representar "null" como nullopt
        } else if (input[i] == "addCar") {
            // Añadir un coche al aparcamiento
            int carType = inputInt[i][0]; // Obtener el tipo de coche
            bool result = myParkingSystem.addCar(carType); // Intentar aparcar el coche
            output.push_back(result); // Agregar true o false al resultado
        }
    }

    // Mostrar el resultado
    cout << "[";
    for (size_t i = 0; i < output.size(); i++) {
        if (output[i].has_value()) {
            // Mostrar true o false si el valor está presente
            cout << (output[i].value() ? "true" : "false");
        } else {
            // Mostrar null si no hay valor
            cout << "null";
        }
        if (i < output.size() - 1) {
            cout << ", "; // Separar los valores con comas
        }
    }
    cout << "]" << endl; // Cerrar el resultado con corchetes

    return 0; // Finalizar el programa
}
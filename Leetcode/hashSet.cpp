#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

class MyHashSet {
    private:
        // Definir el tamaño del conjunto hash
        static const int SIZE = 1000;
        
        // Definir la tabla hash
        vector<list<int>> table;
        
        // Función hash para mapear una clave a un índice
        int hash(int key) {
            return key % SIZE;
        }

    public:
        MyHashSet() {
            // Inicializar la tabla hash con listas vacías
            table.resize(SIZE);
        }
        
        void add(int key) {
            if (contains(key)) {
                return; // La clave ya existe, no es necesario agregarla
            }
            int index = hash(key); // Obtener el índice para la clave
            table[index].push_back(key); // Agregar la clave a la lista en ese índice
        }
        
        void remove(int key) {
            if (!contains(key)) {
                return; // La clave no existe, no es necesario eliminarla
            }
            int index = hash(key); // Obtener el índice para la clave
            auto& bucket = table[index]; // Obtener la lista en ese índice
            // Buscar la clave en la lista y eliminarla
            for (auto it = bucket.begin(); it != bucket.end(); ++it) {
                if (*it == key) {
                    bucket.erase(it); // Eliminar la clave de la lista
                    return; // Salir después de eliminar
                }
            }
            
        }
        
        bool contains(int key) {
            int index = hash(key); // Obtener el índice para la clave
            auto& bucket = table[index]; // Obtener la lista en ese índice
            // Verificar si la clave existe en la lista
            for (const int& k : bucket) {
                if (k == key) {
                    return true; // Clave encontrada
                }
            }
            return false; // Clave no encontrada
        }
    };
    
    int main()
{
    MyHashSet myHash; // Crear una instancia de la clase Solution
    myHash.add(1); // Agregar la clave 1 al conjunto
    myHash.add(2); // Agregar la clave 2 al conjunto
    cout << myHash.contains(1) << "\n"; // Comprobar si la clave 1 está en el conjunto (debería ser true)
    cout << myHash.contains(3) << "\n"; // Comprobar si la clave 3 está en el conjunto (debería ser false)
    myHash.add(2); // Agregar la clave 2 nuevamente (no debería hacer nada)
    cout << myHash.contains(2) << "\n"; // Comprobar si la clave 2 está en el conjunto (debería ser true)
    myHash.remove(2); // Eliminar la clave 2 del conjunto
    cout << myHash.contains(2) << "\n"; // Comprobar si la clave 2 está en el conjunto (debería ser false)

    return 0; // Finalizar el programa
}
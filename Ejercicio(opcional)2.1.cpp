#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Inicializa los vectores con los nombres y cantidades de los productos
    vector<string> nombres = {"Manzanas", "Plátanos", "Naranjas", "Peras"};
    vector<int> cantidades = {50, 30, 40, 20};
    
    int opcion;
    do {
        // Muestra el menú de opciones al usuario
        cout << "\nMenú de Inventario:\n1. Mostrar productos\n2. Modificar producto\n3. Producto con mayor cantidad\n4. Ordenar productos\n5. Salir\nSeleccione una opción: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                // Opción 1: Mostrar productos
                cout << "\nInventario actual:" << endl;
                for (size_t i = 0; i < nombres.size(); i++)
                    cout << nombres[i] << ": " << cantidades[i] << " unidades" << endl;
                break;
            case 2: {
                // Opción 2: Modificar producto
                string nombre;
                int cantidad;
                cout << "Ingrese el nombre del producto: ";
                cin >> nombre;
                cout << "Ingrese la cantidad a agregar (positivo) o quitar (negativo): ";
                cin >> cantidad;
                
                // Busca el producto en el vector de nombres
                auto it = find(nombres.begin(), nombres.end(), nombre);
                if (it != nombres.end()) {
                    // Si el producto se encuentra, actualiza la cantidad
                    int index = distance(nombres.begin(), it);
                    cantidades[index] = max(0, cantidades[index] + cantidad);
                } else {
                    // Si el producto no se encuentra, muestra un mensaje de error
                    cout << "Producto no encontrado." << endl;
                }
                break;
            }
            case 3:
                // Opción 3: Mostrar el producto con mayor cantidad
                if (!cantidades.empty()) {
                    int max_index = distance(cantidades.begin(), max_element(cantidades.begin(), cantidades.end()));
                    cout << "El producto con mayor cantidad es " << nombres[max_index] << " con " << cantidades[max_index] << " unidades." << endl;
                }
                break;
            case 4: {
                // Opción 4: Ordenar productos por cantidad
                vector<pair<string, int>> ordenado;
                for (size_t i = 0; i < nombres.size(); i++)
                    ordenado.push_back({nombres[i], cantidades[i]});
                
                // Ordena los productos por cantidad en orden ascendente
                sort(ordenado.begin(), ordenado.end(), [](auto& a, auto& b) { return a.second < b.second; });
                
                // Muestra los productos ordenados
                cout << "\nProductos ordenados por cantidad:" << endl;
                for (const auto& p : ordenado)
                    cout << p.first << ": " << p.second << " unidades" << endl;
                break;
            }
            case 5:
                // Opción 5: Salir del programa
                cout << "Saliendo..." << endl;
                break;
            default:
                // Opción inválida
                cout << "Opción inválida." << endl;
        }
    } while (opcion != 5); // Repite el menú hasta que el usuario elija salir
    
    return 0;
}

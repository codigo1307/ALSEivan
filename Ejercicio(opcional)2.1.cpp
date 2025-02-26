#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Inicializa los arreglos con los nombres y cantidades de los productos
    string nombres[] = {"Manzanas", "Platanos", "Naranjas", "Peras"};
    int cantidades[] = {50, 30, 40, 20};
    const int num_productos = 4; // Número de productos
    
    int opcion;
    do {
        // Muestra el menú de opciones al usuario
        cout << "\nMenú de Inventario:\n1. Mostrar productos\n2. Modificar producto\n3. Producto con mayor cantidad\n4. Ordenar productos\n5. Salir\nSeleccione una opción: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                // Opción 1: Mostrar productos
                cout << "\nInventario actual:" << endl;
                for (int i = 0; i < num_productos; i++)
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
                
                // Busca el producto en el arreglo de nombres
                int index = -1;
                for (int i = 0; i < num_productos; i++) {
                    if (nombres[i] == nombre) {
                        index = i;
                        break;
                    }
                }
                
                if (index != -1) {
                    // Si el producto se encuentra, actualiza la cantidad
                    cantidades[index] = max(0, cantidades[index] + cantidad);
                } else {
                    // Si el producto no se encuentra, muestra un mensaje de error
                    cout << "Producto no encontrado." << endl;
                }
                break;
            }
            case 3:{
                // Opción 3: Mostrar el producto con mayor cantidad
                int max_index = 0;
                for (int i = 1; i < num_productos; i++) {
                    if (cantidades[i] > cantidades[max_index]) {
                        max_index = i;
                    }
                }
                cout << "El producto con mayor cantidad es " << nombres[max_index] << " con " << cantidades[max_index] << " unidades." << endl;
                break;
            }
            case 4: {
                // Opción 4: Ordenar productos por cantidad
                for (int i = 0; i < num_productos - 1; i++) {
                    for (int j = i + 1; j < num_productos; j++) {
                        if (cantidades[i] < cantidades[j]) {
                            swap(cantidades[i], cantidades[j]);
                            swap(nombres[i], nombres[j]);
                        }
                    }
                }
                
                // Muestra los productos ordenados
                cout << "\nProductos ordenados por cantidad:" << endl;
                for (int i = 0; i < num_productos; i++)
                    cout << nombres[i] << ": " << cantidades[i] << " unidades" << endl;
                break;
            }
            case 5:{
                // Opción 5: Salir del programa
                cout << "Saliendo..." << endl;
                break;
            }
            default:{
                // Opción inválida
                cout << "Opción inválida." << endl;
            }
        }
    } while (opcion != 5); // Repite el menú hasta que el usuario elija salir
    
    return 0;
}

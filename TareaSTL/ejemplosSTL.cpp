#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <queue>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cctype>
#include <functional>

using namespace std;

// ---------- Utilidad: Limpieza de texto ----------
string limpiarPalabra(string palabra) {
    palabra.erase(remove_if(palabra.begin(), palabra.end(), ::ispunct), palabra.end());
    transform(palabra.begin(), palabra.end(), palabra.begin(), ::tolower);
    return palabra;
}

// ---------- Ejercicio 1: Palabras únicas (set) ----------
void ejercicio1() {
    ifstream archivo("sampleFile.txt");
    if (!archivo) {
        cerr << "Error al abrir el archivo.\n";
        return;
    }

    set<string> palabrasUnicas;
    string palabra;
    while (archivo >> palabra) {
        palabra = limpiarPalabra(palabra);
        if (!palabra.empty()) {
            palabrasUnicas.insert(palabra);
        }
    }

    cout << "\n--- Palabras únicas en el archivo (Ejercicio 1) ---\n";
    for (const auto& p : palabrasUnicas) {
        cout << p << '\n';
    }
}

// ---------- Ejercicio 2: Frecuencia de palabras (map) ----------
void ejercicio2() {
    ifstream archivo("sampleFile.txt");
    if (!archivo) {
        cerr << "Error al abrir el archivo.\n";
        return;
    }

    map<string, int> frecuencia;
    string palabra;
    while (archivo >> palabra) {
        palabra = limpiarPalabra(palabra);
        if (!palabra.empty()) {
            frecuencia[palabra]++;
        }
    }

    cout << "\n--- Frecuencia de palabras (Ejercicio 2) ---\n";
    for (const auto& [palabra, conteo] : frecuencia) {
        cout << palabra << ": " << conteo << '\n';
    }
}

// ---------- Ejercicio 3: Cola de prioridad (priority_queue) ----------
void ejercicio3() {
    struct Tarea {
        int prioridad;
        string descripcion;

        bool operator<(const Tarea& otra) const {
            return prioridad < otra.prioridad; // Mayor prioridad primero
        }
    };

    priority_queue<Tarea> tareas;
    tareas.push({3, "Revisión de informes"});
    tareas.push({1, "Preparar presentación"});
    tareas.push({4, "Responder correos urgentes"});
    tareas.push({2, "Reunión con el equipo"});
    tareas.push({5, "Planificar nueva estrategia"});

    cout << "\n--- Tareas por prioridad (Ejercicio 3) ---\n";
    while (!tareas.empty()) {
        const auto& t = tareas.top();
        cout << "[" << t.prioridad << "] " << t.descripcion << '\n';
        tareas.pop();
    }
}

// ---------- Ejercicio 4: Buscar primer número par (find_if) ----------
void ejercicio4() {
    vector<int> numeros = {7, 13, 9, 8, 15, 6, 21};
    auto esPar = [](int n) { return n % 2 == 0; };

    auto it = find_if(numeros.begin(), numeros.end(), esPar);

    cout << "\n--- Primer número par (Ejercicio 4) ---\n";
    if (it != numeros.end()) {
        cout << *it << " (posición " << distance(numeros.begin(), it) << ")\n";
    } else {
        cout << "No hay números pares.\n";
    }
}

// ---------- Ejercicio 5: Ordenar pares descendente (sort) ----------
void ejercicio5() {
    vector<pair<int, string>> datos = {
        {5, "manzana"}, {2, "banana"}, {8, "naranja"},
        {1, "uva"}, {7, "pera"}
    };

    sort(datos.begin(), datos.end(), [](const auto& a, const auto& b) {
        return a.first > b.first;
    });

    cout << "\n--- Datos ordenados descendentemente (Ejercicio 5) ---\n";
    for (const auto& [num, fruta] : datos) {
        cout << "{" << num << ", " << fruta << "}\n";
    }
}

// ---------- Menú principal ----------
int main() {
    int opcion;
    do {
        cout << "\n----- MENÚ STL -----\n"
             << "1. Palabras únicas en archivo (set)\n"
             << "2. Frecuencia de palabras (map)\n"
             << "3. Cola de prioridad (priority_queue)\n"
             << "4. Buscar primer número par (find_if)\n"
             << "5. Ordenar pares descendente (sort personalizado)\n"
             << "0. Salir\n"
             << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: ejercicio1(); break;
            case 2: ejercicio2(); break;
            case 3: ejercicio3(); break;
            case 4: ejercicio4(); break;
            case 5: ejercicio5(); break;
            case 0: cout << "Saliendo...\n"; break;
            default: cout << "Opción no válida.\n";
        }

    } while (opcion != 0);

    return 0;
}

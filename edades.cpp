#include <iostream>
using namespace std;

int main() {
    // 1. Crear el arreglo para 5 números enteros
    int edades[5];

    cout << "=== Registro de Edades ===" << endl;

    // 2 y 3. Solicitar las edades y guardarlas en el arreglo
    for (int i = 0; i < 5; i++) {
        cout << "Ingresa la edad de la persona " << (i + 1) << ": ";
        cin >> edades[i];
    }

    cout << "\n--- Lista de edades registradas ---" << endl;

    // 4 y 5. Recorrer el arreglo con un ciclo for y mostrar los valores
    for (int i = 0; i < 5; i++) {
        cout << "Persona " << (i + 1) << ": " << edades[i] << " años" << endl;
    }

    return 0;
}
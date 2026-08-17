#include <iostream>

using namespace std;

// Definición de precios constantes
const float PRECIO_CAFE = 35.0f;
const float PRECIO_SANDWICH = 65.0f;
const float PRECIO_JUGO = 40.0f;

void mostrarMenu() {
    cout << "1. Cafe      $" << PRECIO_CAFE << endl;
    cout << "2. Sandwich  $" << PRECIO_SANDWICH << endl;
    cout << "3. Jugo      $" << PRECIO_JUGO << endl;
}

int main() {
    int cantidadProductos;
    float subtotal = 0.0f;

    cout << "¿Cuantos productos deseas comprar? ";
    cin >> cantidadProductos;

    // Ciclo for para registrar la cantidad seleccionada
    for (int i = 1; i <= cantidadProductos; i++) {
        int opcion;
        cout << "\nProducto " << i << endl;
        
        // Reto opcional: Validación con ciclo do-while
        do {
            mostrarMenu();
            cout << "Selecciona una opcion: ";
            cin >> opcion;

            switch (opcion) {
                case 1:
                    subtotal += PRECIO_CAFE;
                    break;
                case 2:
                    subtotal += PRECIO_SANDWICH;
                    break;
                case 3:
                    subtotal += PRECIO_JUGO;
                    break;
                default:
                    cout << "Opcion no valida. Intenta de nuevo.\n" << endl;
            }
        } while (opcion < 1 || opcion > 3);
    }

    // Cálculo del descuento y total final
    float descuento = 0.0f;
    if (subtotal > 150.0f) {
        descuento = subtotal * 0.10f; // 10% de descuento
    }

    float totalFinal = subtotal - descuento;

    cout << "\nSubtotal: $" << subtotal << endl;
    if (descuento > 0) {
        cout << "Descuento (10%): $" << descuento << endl;
    }
    cout << "Total a pagar: $" << totalFinal << endl;

    return 0;
}
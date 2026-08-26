// Ejercicio 02: Operadores y Estructuras de Control en C++

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main() {
    // --- 1. OPERADORES ---
    cout << "--- OPERADORES ---" << endl;

    // Aritméticos
    int a = 10, b = 3;
    cout << "Aritmeticos: " << a << " + " << b << " = " << (a + b) << endl;

    // Asignación
    int c = 5;
    c += 2; // c ahora es 7
    cout << "Asignacion (+=): " << c << endl;

    // Comparación
    cout << "Comparacion (10 > 3): " << (a > b) << endl;

    // Lógicos
    cout << "Logicos (true && false): " << (true && false) << endl;

    // Bits (Bitwise)
    // 5 en binario es 101, 1 en binario es 001. 5 & 1 es 001 (1)
    cout << "Bits (5 & 1): " << (5 & 1) << endl;

    // Identidad/Punteros (Dirección de memoria)
    int val = 10;
    int* ptr = &val;
    cout << "Identidad (Direccion de val): " << ptr << endl;

    cout << endl;

    // --- 2. ESTRUCTURAS DE CONTROL ---
    cout << "--- ESTRUCTURAS DE CONTROL ---" << endl;

    // Condicionales (if, else if, else)
    if (a > b) {
        cout << "Condicional: 'a' es mayor que 'b'" << endl;
    }

    // Switch
    int opcion = 2;
    switch(opcion) {
        case 1: cout << "Switch: Opcion 1" << endl; break;
        case 2: cout << "Switch: Opcion 2" << endl; break;
        default: cout << "Switch: Opcion desconocida" << endl;
    }

    // Iterativas (for, while, do-while)
    cout << "Bucle for: ";
    for(int i = 0; i < 3; i++) cout << i << " ";
    cout << endl;

    int j = 0;
    cout << "Bucle while: ";
    while(j < 3) { cout << j << " "; j++; }
    cout << endl;

    // Excepciones (try, catch, throw)
    try {
        int divisor = 0;
        if (divisor == 0) throw runtime_error("Division por cero no permitida");
        int res = 10 / divisor;
    } catch (const exception& e) {
        cout << "Excepcion capturada: " << e.what() << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

// Función para calcular el promedio de tres calificaciones
float calcularPromedio(float c1, float c2, float c3) {
    return (c1 + c2 + c3) / 3.0f;
}

int main() {
    float cal1, cal2, cal3;

    // 1. Solicitar las tres calificaciones
    cout << "Ingresa la calificacion 1: ";
    cin >> cal1;
    cout << "Ingresa la calificacion 2: ";
    cin >> cal2;
    cout << "Ingresa la calificacion 3: ";
    cin >> cal3;

    // 2 y 3. Calcular y mostrar el promedio
    float promedio = calcularPromedio(cal1, cal2, cal3);
    cout << "Promedio: " << promedio << endl;

    // 4 y 5. Determinar estado de aprobación
    if (promedio >= 6.0f) {
        cout << "Resultado: APROBADO" << endl;
    } else {
        cout << "Resultado: REPROBADO" << endl;
    }

    // Reto opcional: Clasificación de desempeño
    cout << "Clasificacion: ";
    if (promedio >= 9.0f) {
        cout << "Excelente" << endl;
    } else if (promedio >= 8.0f) {
        cout << "Muy bien" << endl;
    } else if (promedio >= 7.0f) {
        cout << "Bien" << endl;
    } else if (promedio >= 6.0f) {
        cout << "Suficiente" << endl;
    } else {
        cout << "Reprobado" << endl;
    }

    return 0;
}
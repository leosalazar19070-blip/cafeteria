// EJERCICIO INTEGRADOR: SISTEMA DE CALIFICACIONES 
#include <iostream> //libreria para utilizar cout y cit.
#include <iostream> //libreria para trabajar con cadenas de texto.
using namespace std; // Permite utilizar cout , cin y string sin escribir std::

//Creamos una constante con el numero maxico de alumnos.
const int MAX_ALUMNOS = 5; 

//Creamkos una Funcion llamada CalcularPromedio.
//la fubcion resibe el arreglo de calificaciones y la cantidad de alumnos registrados. 
float calcularPromedio(float calificaciones[], int cantidadAlumnos){
    float suma =0; 
    // Recorremos todas las calificaciones resgistradas.
    for (int i= 0; i < cantidadAlumnos; i++) {
        suma += calificaciones[i]; //Acumulamos la suma
    }
    //Calculamos y regresamos el promedio.
    return suma / cantidadAlumnos;
    
}    

//Aqui comienza nuetro programa principal 
int main() {
    //Arreglos para guardar nombres y calificaciones 
    string nombres[MAX_ALUMNOS];
    float calificaciones[MAX_ALUMNOS];

    int cantidadAlumnos = 0;//Contara cuantos alumnos llevamos reuistrados 
    int opcion; // Guardara la opcion seleccionada en el menu 

    //Ciclo do-while para repartir el menu 
    do {
        cout << "\n===== SISTEMA DE CALIFICACIONES =====" <<endl;
        cout << "1. Registrar alumno" << endl;
        cout << "2. Mostrar alumno" << endl;
        cout << "3. Calcular promedio" << endl;
        cout << "4. Buscar alumno" << endl; 
        cout << "5. Salir" << endl; 
        cin >> opcion; 

        switch (opcion) {
           //OPCION 1: REGISTRAR ALUMNO 
           case 1:
               if (cantidadAlumnos < MAX_ALUMNOS) {
                cout << "Nombre del alumno: ";
                cin >> nombres[cantidadAlumnos];
                
                cout << "Calificacion: ";
                cin >> calificaciones[cantidadAlumnos];

                //Validamos qu la calificacion este ente 0 y 10
                if (calificaciones[cantidadAlumnos] >= 0 && calificaciones[cantidadAlumnos]<= 10) {
                    cantidadAlumnos++;
                    cout <<"Alumnos registrados correctamente." << endl;
                } else { 
                    cout << "la calificacion debe estar entre 0 y 10." << endl;
                }
                } else { 
                    cout <<"Ya no se pueden registrar mas alumnos." << endl;
                }
                break;

                //OPCION 2: MOSTRAR ALUMNOS 
                case 2:
                if (cantidadAlumnos == 0) {
                    cout << "No existen alumnos registrados." << endl;
                } else {
                    cout << "\n===== ALUMNOS REGISTRADOS =====" << endl;
                    for (int i = 0; i < cantidadAlumnos; i++) {
                        cout << nombres[i] << " - Calificacion: " << calificaciones[i];
                        
                        if (calificaciones[i] >= 6) {
                            cout << " [APROBADO]" << endl;
                        } else {
                            cout << " [REPROBADO]" << endl;
                        }
                    }
                }
                break;

            // OPCIÓN 3: CALCULAR PROMEDIO
            case 3:
                if (cantidadAlumnos == 0) {
                    cout << "No existen alumnos registrados." << endl;
                } else {
                    float promedio = calcularPromedio(calificaciones, cantidadAlumnos);
                    cout << "Promedio del grupo: " << promedio << endl;
                }
                break;

            // OPCIÓN 4: BUSCAR ALUMNO
            case 4: {
                if (cantidadAlumnos == 0) {
                    cout << "No existen alumnos registrados." << endl;
                } else {
                    string nombreBuscado;
                    bool encontrado = false;

                    cout << "Nombre del alumno que deseas buscar: ";
                    cin >> nombreBuscado;

                    for (int i = 0; i < cantidadAlumnos; i++) {
                        if (nombres[i] == nombreBuscado) {
                            cout << "\nAlumno encontrado." << endl;
                            cout << "Nombre: " << nombres[i] << endl;
                            cout << "Calificacion: " << calificaciones[i] << endl;
                            
                            if (calificaciones[i] >= 6) {
                                cout << "Estado: APROBADO" << endl;
                            } else {
                                cout << "Estado: REPROBADO" << endl;
                            }
                            encontrado = true;
                            break; // Rompemos el ciclo al encontrarlo
                        }
                    }

                    if (!encontrado) {
                        cout << "Alumno no encontrado." << endl;
                    }
                }
                break;
            }

            // OPCIÓN 5: SALIR
            case 5:
                cout << "Gracias por utilizar el sistema." << endl;
                break;

            default:
                cout << "Opcion no valida." << endl;
                break;
        }

    } while (opcion != 5);

    return 0;
}  

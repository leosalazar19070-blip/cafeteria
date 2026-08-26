/*
 * asignatura: programacion
 * prof: jaciel luna
 * estudiante: leonardo torres
 * mi primer codigo en java
 */

public class ejercicio01 { // Nombre de la clase sin .java
    public static void main(String[] args) {
        
        // 1. Variables
        String material = "Programacion 1";
        int numero = 8;
        double calificacionMinima = 6.0;

        // Constante y variable
        final String UNIVERSIDAD = "UIN";
        int semestre = 1;

        // 2. Tipos primitivos
        byte edad = 20;
        short anio = 2026;
        long matricula = 123456789L;
        float promedio = 8.5f;
        char seccion = 'A';
        boolean esAprobado = true;

        // 3. Impresiones
        System.out.println("bienvenidos a la asignatura de: " + material);
        System.out.println("creditos del curso: " + numero);
        System.out.println("para aprobar necesitas minimo: " + calificacionMinima);
        System.out.println("Universidad: " + UNIVERSIDAD);
        System.out.println("Semestre: " + semestre);
        
        System.out.println("--- Datos adicionales ---");
        System.out.println("Edad: " + edad);
        System.out.println("Año: " + anio);
        System.out.println("Matricula: " + matricula);
        System.out.println("Promedio: " + promedio);
        System.out.println("Seccion: " + seccion);
        System.out.println("¿Esta aprobado?: " + esAprobado);

        // 4. Saludo al lenguaje
        String nombreLenguaje = "Java";
        System.out.println("¡Hola, " + nombreLenguaje + "!");
    }
}

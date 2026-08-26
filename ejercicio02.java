public class ejercicio02 {
    public static void main(String[] args) {
        
        // --- 1. OPERADORES ---
        System.out.println("--- EJEMPLOS DE OPERADORES ---");
        
        int a = 10, b = 3;
        
        // Aritméticos
        System.out.println("Aritméticos (10 + 3): " + (a + b));
        
        // Asignación
        a += 5; // a ahora es 15
        System.out.println("Asignación (a += 5): " + a);
        
        // Comparación
        System.out.println("Comparación (15 > 3): " + (a > b));
        
        // Lógicos
        System.out.println("Lógicos (true && false): " + (true && false));
        
        // Bits (AND a nivel de bit)
        System.out.println("Bits (10 & 3): " + (10 & 3));
        
        // Identidad (referencia de objetos)
        String s1 = "Hola";
        String s2 = "Hola";
        System.out.println("Identidad (s1 == s2): " + s1.equals(s2)); // true (mismo literal)
        System.out.println("Igualdad de contenido (s1.equals(s2)): " + s1.equals(s2)); // true

        // --- 2. ESTRUCTURAS DE CONTROL ---
        System.out.println("\n--- ESTRUCTURAS DE CONTROL ---");

        // Condicionales
        int edad = 18;
        if (edad >= 18) {
            System.out.println("Condicional: Eres mayor de edad.");
        }
        
        switch (a) {
            case 15 -> System.out.println("Switch: El valor es 15.");
            default -> System.out.println("Switch: Otro valor.");
        }

        // Iterativas
        System.out.print("For loop: ");
        for (int i = 0; i < 3; i++) System.out.print(i + " ");
        
        System.out.println("\nWhile loop: ");
        int contador = 0;
        while (contador < 2) {
            System.out.println("  Contando: " + contador);
            contador++;
        }

        // Excepciones
        try {
        } catch (ArithmeticException e) {
            System.out.println("Excepción capturada: División por cero.");
        } finally {
            System.out.println("Bloque finally: Esto siempre se ejecuta.");
        }
    }
}
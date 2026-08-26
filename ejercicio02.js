// Archivo: ejercicio02.js

console.log("--- 1. OPERADORES ---");

// Aritméticos
let a = 10, b = 3;
console.log("Aritméticos (10 % 3): " + (a % b));

// Asignación
a += 5; 
console.log("Asignación (a += 5): " + a);

// Comparación (igualdad débil vs estricta)
console.log("Comparación (15 == '15'): " + (15 == '15')); // true
console.log("Identidad estricta (15 === '15'): " + (15 === '15')); // false

// Lógicos
console.log("Lógicos (true && false): " + (true && false));

// Bits
console.log("Bits (10 & 3): " + (10 & 3));

// Pertenencia (in)
const usuario = { nombre: "Gemini", rol: "IA" };
console.log("Pertenencia ('nombre' in usuario): " + ('nombre' in usuario));

// --- 2. ESTRUCTURAS DE CONTROL ---
console.log("\n--- ESTRUCTURAS DE CONTROL ---");

// Condicionales
let edad = 18;
if (edad >= 18) {
    console.log("Condicional: Eres mayor de edad.");
}

switch (a) {
    case 15: console.log("Switch: El valor es 15."); break;
    default: console.log("Switch: Otro valor.");
}

// Iterativas
console.log("For loop:");
for (let i = 0; i < 3; i++) console.log("  i = " + i);

console.log("While loop:");
let contador = 0;
while (contador < 2) {
    console.log("  Contando: " + contador);
    contador++;
}

// Excepciones (try-catch-finally)
try {
    throw new Error("Algo salió mal");
} catch (error) {
    console.log("Excepción capturada: " + error.message);
} finally {
    console.log("Bloque finally: Siempre se ejecuta.");
}
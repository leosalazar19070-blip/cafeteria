/* 
 * asignatura: programacion
 * prof: jaciel luna
 * estudiante: leonardo torres
 * mi primer codigo en javascript
 * fecha 31/05/2026
 */

//--- Tipo de dato primitivo ---

//1.Cadena de texto /String)
const nombrelenguaje = "JavaScript";
let mensajeBienvenida = "este es el lenguaje versatil.";

//2. Numero (Number)- EN JS, enteros y decimales son el mismi tipo
let entero = 2026;
let flotante = 3.141559; 

//3. Booleano (Boolean)
let esDivertido = true;
let esAburrido = false;

//4.Null - represemta la ausencia de intencionada de valor 
let vacio = sinDefinir; 

//5.Underfined - variable declarada pero sin valor asignado 
let sinDefinir;

//6. BigInt - para numeros enteros etremadamente muy grandes 
let numeroGrande = 9007188254740991n;

//7. Symbol - identificador inico y privado 
let idUnido = Symbolo("id");

//tipo de datos compuestos (objetos y Arraays)---

//array (lista de elementos)
let ListaDeTipos = ["String", "Number", "Boolean", "Null", "Undefined", "BigInt", "Symbol"];

//Objeto Colecion de pares clave-valor)
let infCurso = {
    asignatura: "Programacion Web",
    duracionSemanas: 16,
    estaActiva: true
};

//---inprecion por terminal---
console.log("hola, " + nombrelenguaje + "!" );

// impresion adicional para verificar las variables 
console.log("Tipos de datos cubiertos:", ListaDeTipos.join(", "));
console.log("Valor de BigInt:", numeroGrande);
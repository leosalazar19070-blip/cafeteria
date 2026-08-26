"""
ESTRUCTURA DE CÓDIGO Y SINTAXIS BÁSICA
======================================
Este script demuestra las reglas de estilo y los tipos de datos 
fundamentales en el lenguaje de programación Python.

INFORMACIÓN DEL CURSO:
- Profesor: Jaciel Luna
- Estudiante: Leonardo Torres
- Fecha: 31 de mayo de 2026
- Institución: Universidad Insurgente

COMENTARIOS:
1. Comentario de una línea: Se utiliza el símbolo hash (#).
2. Comentario de bloque: Se utilizan tres comillas dobles ('''...''') o simples (''').
   Esto es ideal para documentación o explicaciones extensas.
"""

# --- Constantes ---
# Por convención, las constantes se definen en mayúsculas sostenidas.
GRAVEDAD_TIERRA = 9.81  # m/s^2

# --- Variables ---
nombre_usuario = "Leonardo Torres"
puntuacion_actual = 0

# --- Tipos de datos primitivos ---

# 1. Cadenas de texto (Strings)
mensaje_bienvenida = "Bienvenido al laboratorio de Python."

# 2. Enteros (Integers)
anio_lectivo = 2026

# 3. Flotantes (Floats) - Números decimales
tasa_interes = 0.05

# 4. Booleanos (Booleans) - Valores lógicos
esta_activo = True

# 5. Números complejos (Complex) - Parte real e imaginaria
coordenada_compleja = 2 + 5j

# --- Impresión en terminal ---
# Utilizamos f-strings para formatear la salida del sistema.
lenguaje = "Python"
print("------------------------------------------")
print(f"¡Hola, {lenguaje}!")
print(f"Usuario actual: {nombre_usuario}")
print(f"Institución: Universidad Insurgente")
print(f"Año en curso: {anio_lectivo}")
print("------------------------------------------")

# Ejemplo de manipulación de tipos
resultado_operacion = anio_lectivo + float(tasa_interes)
print(f"Operación de prueba con tipos distintos: {resultado_operacion}")
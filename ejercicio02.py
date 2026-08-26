# ==========================================
# 1. OPERADORES EN PYTHON
# ==========================================
print("--- OPERADORES ---")

# Aritméticos
a, b = 10, 3
print(f"Aritméticos: {a} + {b} = {a + b}, {a} // {b} = {a // b}, {a} % {b} = {a % b}")

# Comparación
print(f"Comparación: {a} > {b} es {a > b}")

# Lógicos
print(f"Lógicos: {a > 5 and b < 10} (and), {a > 20 or b > 0} (or), {not(a > 5)} (not)")

# Asignación
x = 5
x += 2 # x ahora es 7
print(f"Asignación: x inicial 5, x += 2 es {x}")

# Identidad (is)
lista_a = [1, 2]
lista_b = [1, 2]
print(f"Identidad: lista_a is lista_b es {lista_a is lista_b} (son objetos distintos)")

# Pertenencia (in)
print(f"Pertenencia: 1 in [1, 2, 3] es {1 in [1, 2, 3]}")

# Bits (Bitwise)
# 5 (101) & 3 (011) = 1 (001)
print(f"Bits: 5 & 3 = {5 & 3}")

print("\n")

# ==========================================
# 2. ESTRUCTURAS DE CONTROL
# ==========================================
print("--- ESTRUCTURAS DE CONTROL ---")

# Condicionales (if, elif, else)
edad = 18
if edad < 18:
    print("Condicional: Eres menor de edad.")
elif edad == 18:
    print("Condicional: Tienes exactamente 18 años.")
else:
    print("Condicional: Eres mayor de edad.")

# Iterativas (for, while)
print("Iterativa (for): ", end="")
for i in range(3):
    print(i, end=" ")
print()

print("Iterativa (while): ", end="")
contador = 0
while contador < 3:
    print(contador, end=" ")
    contador += 1
print()

# Excepciones (try, except, finally)
try:
    resultado = 10 / 0
except ZeroDivisionError:
    print("Excepciones: Capturado error de división por cero.")
finally:
    print("Excepciones: Este bloque 'finally' siempre se ejecuta.")
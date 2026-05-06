import random
import time

inicio = time.time()

sucursales = []
ventas = []
total = 0

for i in range(25):
    sucursales.append(i + 1)
    venta_actual = random.randint(500, 15000)
    ventas.append(venta_actual)
    total += venta_actual

promedio = total / 25

print("Promedio de ventas:", promedio)
print("Sucursales con ventas mayores al promedio:")

for i in range(25):
    if ventas[i] > promedio:
        print("Sucursal", sucursales[i], "Ventas:", ventas[i])

fin = time.time()
print("Tiempo de ejecución:", fin - inicio, "segundos")
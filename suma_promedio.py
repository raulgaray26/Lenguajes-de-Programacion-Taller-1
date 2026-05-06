import time

inicio = time.time() 

suma = 0
for i in range(10):
    valor = float(input("Ingresa un valor: "))
    suma = suma + valor

promedio = suma / 10

print("La suma total es:", suma)
print("El promedio es:", promedio)

fin = time.time() 

tiempo_total = fin - inicio
print("Tiempo de ejecución:", tiempo_total, "segundos")
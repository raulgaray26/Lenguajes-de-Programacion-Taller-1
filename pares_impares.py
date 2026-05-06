import random
import time

inicio = time.time()

pares = 0
impares = 0

for i in range(500):
    valor = random.randint(50, 100)
    
    if valor % 2 == 0:
        pares = pares + 1
    else:
        impares = impares + 1

print("Números pares:", pares)
print("Números impares:", impares)

fin = time.time()
tiempo_total = fin - inicio
print("Tiempo de ejecución:", tiempo_total, "segundos")
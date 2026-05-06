#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    clock_t inicio = clock();
    srand(time(NULL));

    int sucursales[25];
    float ventas[25];
    float total = 0.0;

    for (int i = 0; i < 25; i++) {
        sucursales[i] = i + 1;
        ventas[i] = (rand() % 14501) + 500;
        total += ventas[i];
    }

    float promedio = total / 25.0;

    printf("Promedio de ventas: %.2f\n", promedio);
    printf("Sucursales con ventas mayores al promedio:\n");

    for (int i = 0; i < 25; i++) {
        if (ventas[i] > promedio) {
            printf("Sucursal %d - Ventas: %.2f\n", sucursales[i], ventas[i]);
        }
    }

    clock_t fin = clock();
    double tiempo_total = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecucion: %f segundos\n", tiempo_total);

    return 0;
}
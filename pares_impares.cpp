#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    clock_t inicio = clock();
    srand(time(NULL));

    int pares = 0;
    int impares = 0;
    int valor;

    for (int i = 0; i < 500; i++) {
        valor = (rand() % 51) + 50;

        if (valor % 2 == 0) {
            pares = pares + 1;
        } else {
            impares = impares + 1;
        }
    }

    printf("Números pares: %d\n", pares);
    printf("Números impares: %d\n", impares);

    clock_t fin = clock();
    double tiempo_total = (double)(fin - inicio) / CLOCKS_PER_SEC;
    
    printf("Tiempo de ejecucion: %f segundos\n", tiempo_total);

    return 0;
}
#include <stdio.h>
#include <time.h>

int main() {
    clock_t inicio = clock(); 

    float suma = 0.0;
    float valor;

    for (int i = 0; i < 10; i++) {
        printf("Ingresa un valor: ");
        scanf("%f", &valor); 
        suma = suma + valor;
    }

    float promedio = suma / 10.0;

    printf("La suma total es: %.2f\n", suma);
    printf("El promedio es: %.2f\n", promedio);

    clock_t fin = clock(); 

    double tiempo_total = (double)(fin - inicio) / CLOCKS_PER_SEC;
    
    printf("Tiempo de ejecucion: %f segundos\n", tiempo_total);

    return 0;
}
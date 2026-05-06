#include <stdio.h>

int main() {
    float suma = 0.0;
    float valor;

    for (int i = 0; i < 10; i++) {
        printf("Ingresa un número: ");
        scanf("%f", &valor); 
        suma = suma + valor;
    }

    float promedio = suma / 10.0;

    printf("La suma total es: %.2f\n", suma);
    printf("El promedio es: %.2f\n", promedio);

    return 0;
}
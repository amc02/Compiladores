#include <stdio.h>

int main() {
    // Definición del arreglo para almacenar las calificaciones
    int calificaciones[5]; // El tamaño del arreglo es 5 para almacenar las calificaciones de 5 estudiantes

    // Lectura de las calificaciones desde el usuario
    printf("Ingrese las calificaciones de 5 estudiantes:\n");
    for (int i = 0; i < 5; i++) {
        printf("Calificación del estudiante %d: ", i + 1);
        scanf("%d", &calificaciones[i]);
    }

    // Cálculo del promedio de las calificaciones
    int suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += calificaciones[i];
    }
    float promedio = (float) suma / 5; // División como flotante para obtener el resultado con decimales

    // Impresión del promedio de las calificaciones
    printf("El promedio de las calificaciones es: %.2f\n", promedio);

    return 0;
}



#include <stdio.h>

// Declaración de la función potencia
int potencia(int base, int exponente);

int main() {
    int base, exponente;

    // Solicitar al usuario la base y el exponente
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    // Calcular y mostrar el resultado
    int resultado = potencia(base, exponente);
    printf("%d elevado a %d es igual a %d\n", base, exponente, resultado);

    return 0;
}

// Definición de la función potencia
int potencia(int base, int exponente) {
    int resultado = 1;

    // Calcular la potencia
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    return resultado;
}

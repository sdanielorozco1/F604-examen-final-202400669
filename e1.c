/*
 * Ejercicio 1 (e1.c)
 * Solicita un valor entero al usuario, lo lee y lo muestra en pantalla.
 */
#include <stdio.h>

int main(void) {
    int val;

    printf("Ingrese un valor entero\n");
    if (scanf("%d", &val) == 1) {
        printf("Salida: %d\n", val);
    }

    return 0;
}
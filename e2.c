/*
 * Ejercicio 2 (e2.c)
 * Solicita un nombre al usuario, lo lee y muestra un saludo en pantalla.
 */
#include <stdio.h>

int main(void) {
    char name[100];

    printf("Ingrese un nombre\n");
    if (scanf("%99s", name) == 1) {
        printf("Hola %s\n", name);
    }

    return 0;
}
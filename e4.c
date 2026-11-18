/*
 * Ejercicio 4 (e4.c)
 * Imprime una tabla de conversion de temperaturas de Celsius a Fahrenheit
 * (de 0 a 100 C en pasos de 10) con encabezado.
 */
#include <stdio.h>

int main(void)
{
    int lower, upper, step;
    float celsius, fahr;

    lower = 0;   /* limite inferior de la tabla de temperaturas */
    upper = 100; /* limite superior */
    step = 10;   /* tamano del incremento */

    printf("%4s %6s\n", "C", "F");
    printf("---- ------\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%4.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
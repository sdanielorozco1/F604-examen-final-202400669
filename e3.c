/*
 * Ejercicio 3 (e3.c)
 * Imprime una tabla de conversion de temperaturas de Fahrenheit a Celsius
 * (de 0 a 300 F en pasos de 20) con encabezado.
 */
#include <stdio.h>

int main(void)
{
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;   /* limite inferior de la tabla de temperaturas */
    upper = 300; /* limite superior */
    step = 20;   /* tamano del incremento */

    printf("%4s %6s\n", "F", "C");
    printf("---- ------\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
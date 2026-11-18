/*
 * Ejercicio 8 (e8.c)
 * Copia la entrada a la salida reemplazando cada secuencia de uno o mas
 * espacios en blanco por un solo espacio en blanco.
 */
#include <stdio.h>

int main(void)
{
    int c;
    int in_blank;

    in_blank = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (!in_blank) {
                putchar(' ');
                in_blank = 1;
            }
        } else {
            putchar(c);
            in_blank = 0;
        }
    }

    return 0;
}
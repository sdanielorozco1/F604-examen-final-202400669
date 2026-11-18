/*
 * Ejercicio 9 (e9.c)
 * Copia la entrada a la salida haciendo visibles las tabulaciones (>\b-)
 * y los retrocesos (<\b-).
 */
#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('>');
            putchar('\b');
            putchar('-');
        } else if (c == '\b') {
            putchar('<');
            putchar('\b');
            putchar('-');
        } else {
            putchar(c);
        }
    }

    return 0;
}
/*
 * Ejercicio 6 (e6.c)
 * Imprime todas las lineas de la entrada que tengan mas de 80 caracteres.
 */
#include <stdio.h>

#define LIMITE 80

int main(void)
{
    int c;
    int len;
    int i;
    char buffer[LIMITE];

    len = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            if (len > LIMITE) {
                putchar('\n');
            }
            len = 0;
        } else {
            if (len < LIMITE) {
                buffer[len] = (char)c;
            } else if (len == LIMITE) {
                for (i = 0; i < LIMITE; ++i) {
                    putchar(buffer[i]);
                }
                putchar(c);
            } else {
                putchar(c);
            }
            ++len;
        }
    }

    return 0;
}
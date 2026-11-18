/*
 * Ejercicio 5 (e5.c)
 * Elimina los espacios en blanco y tabulaciones al final de cada linea
 * de entrada, y suprime las lineas que queden completamente en blanco.
 */
#include <stdio.h>

#define MAXLINE 10000

int main(void)
{
    int c;
    int len;
    int i;
    char line[MAXLINE];

    len = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            i = len - 1;
            while (i >= 0 && (line[i] == ' ' || line[i] == '\t')) {
                --i;
            }
            line[i + 1] = '\0';
            if (i >= 0) {
                printf("%s\n", line);
            }
            len = 0;
        } else if (len < MAXLINE - 1) {
            line[len] = (char)c;
            ++len;
        }
    }

    /* Caso limite: ultima linea sin salto de linea antes de EOF */
    if (len > 0) {
        i = len - 1;
        while (i >= 0 && (line[i] == ' ' || line[i] == '\t')) {
            --i;
        }
        line[i + 1] = '\0';
        if (i >= 0) {
            printf("%s", line);
        }
    }

    return 0;
}
/*
 * Ejercicio 10 (e10.c)
 * Lee la entrada estandar hasta EOF e imprime un histograma horizontal
 * con la frecuencia de las longitudes de las palabras encontradas.
 */
#include <stdio.h>

#define MAXLEN 25

int main(void)
{
    int c, i, j;
    int wlen, max_len;
    int nlen[MAXLEN + 1];

    wlen = 0;
    max_len = 0;
    for (i = 0; i <= MAXLEN; ++i) {
        nlen[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (wlen > 0) {
                if (wlen > MAXLEN) {
                    wlen = MAXLEN;
                }
                ++nlen[wlen];
                if (wlen > max_len) {
                    max_len = wlen;
                }
                wlen = 0;
            }
        } else {
            ++wlen;
        }
    }

    /* Caso limite: archivo que termina en palabra sin salto de linea */
    if (wlen > 0) {
        if (wlen > MAXLEN) {
            wlen = MAXLEN;
        }
        ++nlen[wlen];
        if (wlen > max_len) {
            max_len = wlen;
        }
    }

    printf("Histograma de longitudes\n");
    for (i = 1; i <= max_len; ++i) {
        printf("%3d | ", i);
        for (j = 0; j < nlen[i]; ++j) {
            putchar('*');
        }
        printf(" %d\n", nlen[i]);
    }

    return 0;
}
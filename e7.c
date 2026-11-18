/*
 * Ejercicio 7 (e7.c)
 * Invierte la entrada linea por linea utilizando la funcion reverse(s).
 */
#include <stdio.h>

#define MAXLINE 10000

void reverse(char s[]);

int main(void)
{
    int c;
    int len;
    char line[MAXLINE];

    len = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            line[len] = '\0';
            reverse(line);
            printf("%s\n", line);
            len = 0;
        } else if (len < MAXLINE - 1) {
            line[len] = (char)c;
            ++len;
        }
    }

    /* Caso limite: ultima linea sin salto de linea antes de EOF */
    if (len > 0) {
        line[len] = '\0';
        reverse(line);
        printf("%s", line);
    }

    return 0;
}

/* reverse: invierte la cadena s en su mismo lugar */
void reverse(char s[])
{
    int i, j;
    char temp;

    j = 0;
    while (s[j] != '\0') {
        ++j;
    }
    --j;

    i = 0;
    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        ++i;
        --j;
    }
}
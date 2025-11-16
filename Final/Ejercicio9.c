#include <stdio.h>

int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            // Cambia la tabulación por un >-
            putchar('>');
            putchar('\b');
            putchar('-');
        } else if (c == '\b') {
            // Cambia el retroceso por un <-
            putchar('<');
            putchar('\b'); // retroceso
            putchar('-');
        } else {
            putchar(c); // los demás carácteres se muestran como siempre
        }
    }

    return 0;
}
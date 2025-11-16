#include <stdio.h>
#include <string.h>

#define MAXLINE 1000  // máximo de cada línea

int main(void) {
    char line[MAXLINE];

    while (fgets(line, MAXLINE, stdin) != NULL) {
        int len = strlen(line);

        // Se elimina el salto de línea
        if (len > 0 && line[len - 1] == '\n') {
            len--; // no contamos '\n'
        }

        if (len > 80) {
            printf("%s\n", line);
        }
    }

    return 0;
}
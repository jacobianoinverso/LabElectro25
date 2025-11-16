#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int main(void) {
    char line[MAXLINE];
    int len, i;

    while (fgets(line, MAXLINE, stdin) != NULL) {
        len = strlen(line);

        if (len > 0 && line[len - 1] == '\n') {
            len--;
            line[len] = '\0';
        }

        while (len > 0 && (line[len - 1] == ' ' || line[len - 1] == '\t')) {
            len--;
            line[len] = '\0';
        }

        if (len > 0) {
            printf("%s\n", line);
        }
    }

    return 0;
}
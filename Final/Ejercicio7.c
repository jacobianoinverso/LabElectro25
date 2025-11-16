#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

void reverse(char s[]) {
    int i, j;
    char temp;
    int len = strlen(s);

    if (len > 0 && s[len - 1] == '\n') {
        len--;
    }

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main(void) {
    char line[MAXLINE];

    while (fgets(line, MAXLINE, stdin) != NULL) {
        reverse(line);
        printf("%s\n", line);
    }

    return 0;
}
#include <stdio.h>

int main(void) {
    int c;
    int prev_space = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            if (!prev_space) {
                putchar(' ');
                prev_space = 1;
            }
         
        } else {
            putchar(c);
            prev_space = 0;
        }
    }

    return 0;
}
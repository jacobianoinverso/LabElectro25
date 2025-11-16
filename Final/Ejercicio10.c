#include <stdio.h>

#define MAXWORD 20  // Máximo de letras de la palabra

int main(void) {
    int c, i;
    int word_length = 0;
    int lengths[MAXWORD + 1] = {0};

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (word_length > 0) {
                if (word_length > MAXWORD)
                    word_length = MAXWORD;
                lengths[word_length]++;
                word_length = 0;
            }
        } else {
            word_length++;
        }
    }

   
    if (word_length > 0) {
        if (word_length > MAXWORD)
            word_length = MAXWORD;
        lengths[word_length]++;
    }


    printf("Histograma de longitudes de palabras:\n");
    for (i = 1; i <= MAXWORD; i++) {
        if (lengths[i] > 0) {
            printf("%2d: ", i);
            for (int j = 0; j < lengths[i]; j++) {
                putchar('*');
            }
            printf("\n");
        }
    }

    return 0;
}
#include <stdio.h>

/* Tabla completa de conversión de Celsius a Fahrenheit
   para c = -50, -45, ..., 100 */

int main(void)
{
    int lower, upper, step;
    float celsius, fahr;

    lower = -50;  /* cota inferior */
    upper = 100;  /* cota superior */
    step = 5;     /* incremento */
    celsius = lower;

    printf("Tabla de conversion de Celsius a Fahrenheit\n");
    printf("%8s %12s\n", "Celsius", "Fahrenheit");

    while (celsius <= upper) {
        fahr = (celsius * 9.0/5.0) + 32.0;
        printf("%8.1f %12.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
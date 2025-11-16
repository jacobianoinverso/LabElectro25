#include <stdio.h>

/* print Fahrenheit-Celsius table
for f = 0, 20, ..., 300 */

int main(void)
{
    int lower, upper, step;
    float fahr, celsius;
    lower = 0;    /* lower limit of temperature table */
    upper = 300;  /* upper limit */
    step = 20;    /* step size */
    fahr = lower;

    printf("Tabla de conversión de Fahrenheit a Celsius\n");
    printf("%6s %6s\n", "Fahr", "Celsius"); // encabezados de columna

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%6.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
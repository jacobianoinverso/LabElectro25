#include <stdio.h>

int main() {
    char name[30];

    // Se ingresa un nombre
    printf("Ingrese su nombre: ");

    // Se admiten 29 carácteres para el nombre del usuario
    scanf("%29s", name);

    printf("Hola %s\n", name);

    return 0;
}
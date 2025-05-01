#include <stdio.h>

int variableGlobal = 20; // Variable global

void funcionEjemplo() {
    printf("Valor de la variable global: %d\n", variableGlobal);
}

int main() {
    funcionEjemplo();
    variableGlobal = 30; // Modificando la variable global
    printf("Nuevo valor de la variable global: %d\n", variableGlobal);
    return 0;
}
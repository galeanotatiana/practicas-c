#include <stdio.h>

int main() {
    int variable = 10;                // Variable normal
    int *puntero = &variable;         // Puntero que guarda la dirección de variable

    // Mostrar la dirección y el valor de una variable
    printf("Dirección de variable: %p\n", &variable);
    printf("Valor de variable: %d\n", variable);

    // Acceder al valor de una variable a través de un puntero
    printf("Valor apuntado por puntero: %d\n", *puntero);

    // Modificar el valor de una variable a través del puntero
    *puntero = 20;
    printf("Nuevo valor de variable después de modificar con puntero: %d\n", variable);

    // Uso del operador & para obtener direcciones
    int otraVariable = 15;
    int *puntero2 = &otraVariable;  // Asignar la dirección de otraVariable a puntero2
    printf("Dirección de otraVariable: %p\n", puntero2);
    printf("Valor apuntado por puntero2: %d\n", *puntero2);

    // Modificar el valor de variable directamente usando su dirección
    int *puntero3 = &variable;
    *puntero3 = 42;
    printf("Valor de variable después de modificar directamente con puntero: %d\n", variable);

    // Punteros nulos
    int *punteroNulo = NULL;
    if (punteroNulo == NULL) {
        printf("El puntero es NULL, no apunta a ninguna dirección válida.\n");
    }

    // Punteros y arreglos
    int arreglo[5] = {1, 2, 3, 4, 5};
    int *punteroArreglo = arreglo;  // Un arreglo "decay" en un puntero a su primer elemento

    printf("Primer elemento del arreglo: %d\n", *punteroArreglo);  // Accede al primer elemento
    printf("Segundo elemento del arreglo: %d\n", *(punteroArreglo + 1));  // Accede al segundo elemento

    // Modificar elementos del arreglo usando el puntero
    *(punteroArreglo + 2) = 42;
    printf("Nuevo tercer elemento del arreglo: %d\n", arreglo[2]);

    return 0;
}

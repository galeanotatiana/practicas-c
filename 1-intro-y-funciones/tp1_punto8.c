// Crear una función que reciba el tipo de bomba para una máquina, siendo el tipo de bomba un valor entero entre 0 y 4.
// Según el tipo de bomba debe mostrarse el siguiente mensaje usando un condicional switch.

#include <stdio.h>
int tipo_de_bomba(){
    int bomba;
    printf("Ingrese un tipo de bomba (0, 1, 2, 3, 4): ");
    scanf("%i ", &bomba);

    switch(bomba) {
        case 0:
        printf("No hay establecido un valor definido para el tipo de bomba \n");
        break;

        case 1:
        printf("La bomba es una bomba de agua \n");
        break;

        case 2:
        printf("La bomba es una bomba de gasolina \n");
        break;

        case 3:
        printf("La bomba es una bomba de hormigon \n");
        break;

        case 4:
        printf("La bomba es una bomba de pasta alimenticia \n");
        break;

        default:
        printf("No existe un valor valido para tipo de bomba \n");
        break;
    }
}
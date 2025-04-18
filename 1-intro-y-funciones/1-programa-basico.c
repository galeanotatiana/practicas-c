#include <stdio.h>

/* CONSTANTES */
#define OPCION_1 1
#define OPCION_2 2
#define OPCION_SALIR 3

/* PROTOTIPOS DE FUNCIONES */
void mostrar_menu();
int leer_opcion();
void ejecutar();

int main(){
    /*Declaración de la variable 'opcion'*/
    int opcion;
    do {
        mostrar_menu(); /*Se muestra el menu de opciones*/
        opcion = leer_opcion(); /*Una vez elegida, se lee la opcion*/
        ejecutar(opcion); /*Ejecuta el codigo correspondiente a la opcion elegida*/
    } while (opcion!=OPCION_SALIR); /*Mientras no se elija salir*/
    return 0;
}

/*Implementación de funciones*/
void mostrar_menu(){
    printf("Elija una opción: \n");
    printf(" 1 - Mostrar un mensaje\n");
    printf(" 2- Mostrar otro mensaje\n");
    printf(" 3 - Salir \n");
}

int leer_opcion(){
    int opcion;
    /*Se lee un número entero por teclado*/
    scanf("%d", &opcion);
    return opcion;
}

void ejecutar(int opcion){
    switch (opcion){
        case OPCION_1:
        printf("Este es un mensaje! \n");
        break;
        case OPCION_2:
        printf("Este es otro mensaje! \n");
        break;
        case OPCION_SALIR:
        printf("Saliendo... \n");
        break;
        default:
        printf("Opción incorrecta! \n");
    }
}
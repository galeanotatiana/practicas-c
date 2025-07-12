//Solicitar un valor numerico entero por teclado e indicar:
// Si es igual a 2, mostrar un mensaje por pantalla indicandolo
// Si es distinto a 2, mostrar un mensaje por pantalla indicando si es menor o mayor a 2

#include <stdio.h>
int main(){
    int x; //Defino la variable x

    printf("Introduce un valor para x: "); //Pido el valor de x por teclado
    scanf ("%i", &x); //La funcion scanf escanea lo que ingresamos por teclado

    if (x==2){ //Si el x ingresado es igual a dos:
        printf("El valor ingresado: %i es igual a 2.\n", x); //Se indica que el valor ingresado == dos.
    }

    else {
        if (x > 2) {
            printf("El valor ingresado: %i es mayor a 2. \n", x);
        }
        else {
            printf("El valor ingresado: %i es menor a 2. \n", x);
        }
    }
    return 0;
}